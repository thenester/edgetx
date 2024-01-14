/*
 * Copyright (C) EdgeTX
 *
 * Based on code named
 *   opentx -   https://github.com/opentx/opentx
 *   th9x -     http://code.google.com/p/th9x
 *   er9x -     http://code.google.com/p/er9x
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
/* -*- coding: utf-8 -*- */

#include <stdint.h>
#include "definitions.h"
#include "translations/untranslated.h"

#if defined(TRANSLATIONS_FR)
static wchar_t _utf8_lut[] = {
  L'é', L'è', L'à', L'î', L'ç',
};

#if !defined(COLORLCD)
#define UTF8_SUBS_LUT
static wchar_t _utf8_substitution_lut[] = {
    L'Â', L'A',
    L'À', L'A',
    L'Ê', L'E',
    L'É', L'E',
    L'È', L'E',
/* Existing but virtually unsused
    L'Ä', L'A',
    L'Ë', L'E',
    L'Ï', L'I',
    L'Ö', L'O',
    L'Ü', L'U',
    L'Û', L'U',
    L'Ù', L'U',
 */
};
#endif
#elif defined(TRANSLATIONS_DA)
static wchar_t _utf8_lut[] = {
  L'å', L'æ', L'ø', L'Å', L'Æ', L'Ø',
};
#elif defined(TRANSLATIONS_DE)
static wchar_t _utf8_lut[] = {
  L'Ä', L'ä', L'Ö', L'ö', L'Ü', L'ü', L'ß',
};
#elif defined(TRANSLATIONS_CZ)
static wchar_t _utf8_lut[] = {
    L'á', L'č', L'é', L'ě', L'í', L'ó', L'ř',
    L'š', L'ú', L'ů', L'ý', L'Á', L'Í', L'Ř',
    L'Ý', L'ž', L'É', L'ň',
};

#if !defined(COLORLCD)
#define UTF8_SUBS_LUT
static wchar_t _utf8_substitution_lut[] = {
    L'Ě', L'ě',
    L'Š', L'š',
    L'Č', L'č',
    L'Ž', L'ž',
    L'Ú', L'ú',
    L'Ů', L'ů',
    L'Ó', L'ó',
    L'Ň', L'ň',
};
#endif
#elif defined(TRANSLATIONS_ES)
static wchar_t _utf8_lut[] = {
  L'Ñ', L'ñ', L'Á', L'á', L'É', L'é', L'Í',
  L'í', L'Ó', L'ó', L'ú',
};
#elif defined(TRANSLATIONS_FI)
static wchar_t _utf8_lut[] = {
  L'å', L'ä', L'ö', L'Å', L'Ä', L'Ö',
};
#elif defined(TRANSLATIONS_IT)
static wchar_t _utf8_lut[] = {
  L'à', L'ù',
};
#elif defined(TRANSLATIONS_PL)
static wchar_t _utf8_lut[] = {
  L'ą', L'ć', L'ę', L'ł', L'ń', L'ó', L'ś',
  L'ż', L'ź', L'Ą', L'Ć', L'Ę', L'Ł', L'Ń',
  L'Ó', L'Ś', L'Ż', L'Ź',
};
#elif defined(TRANSLATIONS_RU)
static wchar_t _utf8_lut[] = {
  L'А', L'Б', L'В', L'Г', L'Д', L'Е', L'Ж',
  L'З', L'И', L'Й', L'К', L'Л', L'М', L'Н', 
  L'О', L'П', L'Р', L'С', L'Т', L'У', L'Ф',
  L'Х', L'Ц', L'Ч', L'Ш', L'Щ', L'Ъ', L'Ы',
  L'Ь', L'Э', L'Ю', L'Я', L'а', L'б', L'в',
  L'г', L'д', L'е', L'ж', L'з', L'и', L'й',
  L'к', L'л', L'м', L'н', L'о', L'п', L'р',
  L'с', L'т', L'у', L'ф', L'х', L'ц', L'ч',
  L'ш', L'щ', L'ъ', L'ы', L'ь', L'э', L'ю',
  L'я', 
};
#elif defined(TRANSLATIONS_SE)
static wchar_t _utf8_lut[] = {
  L'å', L'ä', L'ö', L'Å', L'Ä', L'Ö',
};
#elif defined(TRANSLATIONS_UA)
static wchar_t _utf8_lut[] = {
  L'А', L'Б', L'В', L'Г', L'Ґ', L'Д', L'Е',
  L'Є', L'Ж', L'З', L'И', L'І', L'Ї', L'Й',
  L'К', L'Л', L'М', L'Н', L'О', L'П', L'Р',
  L'С', L'Т', L'У', L'Ф', L'Х', L'Ц', L'Ч',
  L'Ш', L'Щ', L'Ь', L'Ю', L'Я', L'а', L'б',
  L'в', L'г', L'ґ', L'д', L'е', L'є', L'ж',
  L'з', L'и', L'і', L'ї', L'й', L'к', L'л',
  L'м', L'н', L'о', L'п', L'р', L'с', L'т',
  L'у', L'ф', L'х', L'ц', L'ч', L'ш', L'щ',
  L'ь', L'ю', L'я'
};
#else
  #define NO_UTF8_LUT
#endif

#if !defined(NO_UTF8_LUT)
static unsigned char lookup_utf8_mapping(wchar_t w)
{
  for (uint32_t i=0; i < DIM(_utf8_lut); i++) {
    if (w == _utf8_lut[i])
      return 0x95 + (uint8_t)i; // TODO: use constant
  }
  return 0x20; // return 'space' for unknown chars
}
#endif

#if defined(UTF8_SUBS_LUT)
static wchar_t lookup_utf8_substitution(wchar_t w)
{
  for (uint32_t i=0; i < DIM(_utf8_substitution_lut); i+=2) {
    if (w == _utf8_substitution_lut[i])
      return _utf8_substitution_lut[i+1];
  }
  return w;
}
#endif

unsigned char map_utf8_char(const char*& s, uint8_t& len)
{
  uint8_t c = *s;
  if (((c & 0xE0) == 0xC0) || ((c & 0xF0) == 0xE0)) {
    if (!len) return 0;
    wchar_t w = 0;
    if((c & 0xE0) == 0xC0) // two byte sequence
    {
      w = (c & 0x1F) << 6;
      len--; s++; c = *s;
      w |= c & 0x3F;
    } else if ((c & 0xF0) == 0xE0) { // three byte sequence
      w = (c & 0x0F) << 12;
      len--; s++; c = *s;
      if (!len) return 0;
      w |= (c & 0x3F) << 6;
      len--; s++; c = *s;
      w |= c & 0x3F;
    }
    // TODO: use constants
    if (w >= 0x80 && w <= 0x94) { // extra chars
      return (unsigned char)w;
    }
    if(w == L'≥')
      return STR_CHAR_BW_GREATEREQUAL;
    if(w == L'°')
      return STR_CHAR_BW_DEGREE;
#if defined(UTF8_SUBS_LUT)
    auto w_map = lookup_utf8_substitution(w);
    if (w_map> 0x95)
      w_map = lookup_utf8_mapping(w_map);
    return w_map;
#elif !defined(NO_UTF8_LUT)
    return lookup_utf8_mapping(w);
#else
    return 0x20;
#endif
  }

  return c;
}

