/*
 * Copyright (C) EdgeTX
 *
 * Based on code named
 *   opentx - https://github.com/opentx/opentx
 *   th9x - http://code.google.com/p/th9x
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "opentx.h"

enum UkrainianPrompts {
  UA_PROMPT_NUMBERS_BASE = 0,
  UA_PROMPT_ZERO = UA_PROMPT_NUMBERS_BASE + 0,        // 02-99
  UA_PROMPT_HUNDRED = UA_PROMPT_NUMBERS_BASE + 100,   // 100,200 .. 900
  UA_PROMPT_THOUSAND = UA_PROMPT_NUMBERS_BASE + 109,  // 1000
  UA_PROMPT_AND = UA_PROMPT_NUMBERS_BASE + 110,
  UA_PROMPT_MINUS = UA_PROMPT_NUMBERS_BASE + 111,
  UA_PROMPT_POINT = UA_PROMPT_NUMBERS_BASE + 112,
  UA_PROMPT_UNITS_BASE = 113,
  UA_PROMPT_POINT_BASE = 167,  //.0 - .9
};

#define UA_PUSH_UNIT_PROMPT(u, p) \
  ua_pushUnitPrompt((u), (p), id, fragmentVolume)

I18N_PLAY_FUNCTION(ua, pushUnitPrompt, uint8_t unitprompt, int16_t number)
{
  if (number == 1)
    PUSH_UNIT_PROMPT(unitprompt, 0);
  else
    PUSH_UNIT_PROMPT(unitprompt, 1);
}

I18N_PLAY_FUNCTION(ua, playNumber, getvalue_t number, uint8_t unit, uint8_t att)
{
  TRACE("I18N_PLAY_FUNCTION v %d", fragmentVolume);
  if (number < 0) {
    PUSH_NUMBER_PROMPT(UA_PROMPT_MINUS);
    number = -number;
  }

  int8_t mode = MODE(att);
  if (mode > 0) {
    if (mode == 2) {
      number /= 10;
    }
    div_t qr = div((int)number, 10);
    if (qr.rem) {
      PLAY_NUMBER(qr.quot, 0, 0);
      PUSH_NUMBER_PROMPT(UA_PROMPT_POINT_BASE + qr.rem);
      number = -1;
    } else {
      number = qr.quot;
    }
  }

  int16_t tmp = number;

  if (number >= 1000) {
    PLAY_NUMBER(number / 1000, 0, 0);
    PUSH_NUMBER_PROMPT(UA_PROMPT_THOUSAND);
    number %= 1000;
    if (number == 0) number = -1;
  }
  if (number >= 100) {
    PUSH_NUMBER_PROMPT(UA_PROMPT_HUNDRED + (number / 100) - 1);
    number %= 100;
    if (number == 0) number = -1;
  }
  if (number >= 0) {
    PUSH_NUMBER_PROMPT(UA_PROMPT_ZERO + number);
  }

  if (unit) {
    UA_PUSH_UNIT_PROMPT(unit, tmp);
  }
}

I18N_PLAY_FUNCTION(ua, playDuration, int seconds PLAY_DURATION_ATT)
{
  if (seconds == 0) {
    PLAY_NUMBER(seconds, 0, 0);
    return;
  }

  if (seconds < 0) {
    PUSH_NUMBER_PROMPT(UA_PROMPT_MINUS);
    seconds = -seconds;
  }

  int hours, minutes;
  hours = seconds / 3600;
  seconds = seconds % 3600;
  minutes = seconds / 60;
  seconds = seconds % 60;

  if (IS_PLAY_LONG_TIMER() && seconds >= 30) {
    minutes += 1;
  }

  if (hours > 0 || IS_PLAY_TIME()) {
    PLAY_NUMBER(hours, UNIT_HOURS, 0);
  }

  if (minutes > 0) {
    PLAY_NUMBER(minutes, UNIT_MINUTES, 0);
  }

  if (!IS_PLAY_LONG_TIMER() && seconds > 0) {
    if (minutes) PUSH_NUMBER_PROMPT(UA_PROMPT_AND);
    PLAY_NUMBER(seconds, UNIT_SECONDS, 0);
  }
}

LANGUAGE_PACK_DECLARE_DEFAULT(ua, TR_VOICE_UKRAINIAN);
