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
 *
 */

/*
 * Formatting octal codes available in TR_ strings:
 *  \037\x           -sets LCD x-coord (x value in octal)
 *  \036             -newline
 *  \035             -horizontal tab (ARM only)
 *  \001 to \034     -extended spacing (value * FW/2)
 *  \0               -ends current string
 */

#define TR_MIN_PLURAL2 2
#define TR_MAX_PLURAL2 2
// For this number of minute in the last decimal place singular form is used in
// plural
#define TR_USE_SINGULAR_IN_PLURAL 0
#define TR_USE_PLURAL2_SPECIAL_CASE 0
// If the number of minutes is above this value PLURAL2 is used
#define TR_USE_PLURAL2 INT_MAX

#define TR_MINUTE_SINGULAR "хвилина"
#define TR_MINUTE_PLURAL1 "хвилини"
#define TR_MINUTE_PLURAL2 "хвилини"

#define TR_OFFON "Викл", "Вкл"
#define TR_MMMINV "---", "ІНВ"
#define TR_VBEEPMODE "Тихо", "Сигналізація", "БезКноп", "Все"
#define TR_VBLMODE "Викл", "Keys", TR("Ctrl", "Controls"), "Both", "Вкл"
#define TR_TRNMODE "Викл", TR("+=", "Додати"), TR(":=", "Замінити")
#define TR_TRNCHN "CH1", "CH2", "CH3", "CH4"

#define TR_AUX_SERIAL_MODES                                               \
  "Викл", "Telem Mirror", "Телеметрія вкл", "SBUS Trainer", "LUA", "CLI", \
      "GPS", "Відлагодження", "SpaceMouse", "Зовніш. модуль"
#define TR_SWTYPES "Нема", "Переключатель", "2-позиц.", "3-позиц."
#define TR_POTTYPES                                                     \
  "Нема", "Pot", TR("Pot w. det", "Pot with detent"), "Слайдер",        \
      TR("Мультипоз.", "Пультипоз. Переключателі"), "Вісь X", "Вісь Y", \
      "Переключатель"
#define TR_VPERSISTENT "Викл", "Політ", "Ручне Скидання"
#define TR_COUNTRY_CODES \
  TR("US", "Америка"), TR("JP", "Японія"), TR("EU", "Європа")
#define TR_USBMODES \
  "Запитати", TR("Джойст.", "Джойстик"), TR("SD-карта", "Накопичувач"), "Serial"
#define TR_JACK_MODES "Запит", "Звук", "Трейнер"

#define TR_SBUS_INVERSION_VALUES "звичайно", "неінвертовано"
#define TR_MULTI_CUSTOM "Спец."
#define TR_VTRIMINC                                                        \
  TR("Expo", "Exponential"), TR("ExFine", "Extra Fine"), "Fine", "Medium", \
      "Coarse"
#define TR_VDISPLAYTRIMS "Ні", "Змінити", "Так"
#define TR_VBEEPCOUNTDOWN                                                    \
  "Тихо", "Сигнали", "Голос", "Вібро", TR2_2("Сиг & Віб", "Beeps & Haptic"), \
      TR2_2("Гол & Віб", "Голос & Вібро")
#define TR_COUNTDOWNVALUES "5с", "10с", "20с", "30с"
#define TR_VVARIOCENTER "Тон", "Тихо"
#define TR_CURVE_TYPES "Звичайно", "Спец."

#define TR_ADCFILTERVALUES "Глобально", "Викл", "Вкл"

#define TR_VCURVETYPE "Різн", "Експо", "Ф-ція", "Спец."
#define TR_VCURVEFUNC "---", "x>0", "x<0", "|x|", "f>0", "f<0", "|f|"
#define TR_VMLTPX "Додав", "Множ", "Заміна"
#define TR_VMLTPX2 "+=", "*=", ":="

#if LCD_W >= 212
#define TR_CSWTIMER "Timer"
#define TR_CSWSTICKY "Stcky"
#define TR_CSWSTAY "Edge"
#else
#define TR_CSWTIMER "Tim"
#define TR_CSWSTICKY "Stky"
#define TR_CSWSTAY "Edge"
#endif

#define TR_CSWEQUAL "a=x"
#define TR_VCSWFUNC                                                           \
  "---", TR_CSWEQUAL, "a" STR_CHAR_TILDE "x", "a>x", "a<x", "|a|>x", "|a|<x", \
      "AND", "OR", "XOR", TR_CSWSTAY, "a=b", "a>b", "a<b",                    \
      STR_CHAR_DELTA "≥x", "|" STR_CHAR_DELTA "|≥x", TR_CSWTIMER, TR_CSWSTICKY

#define TR_SF_TRAINER "Трейнер"
#define TR_SF_INST_TRIM "Миттєв. Трім"
#define TR_SF_RESET "Скинути"
#define TR_SF_SET_TIMER "Встанов."
#define TR_SF_VOLUME "Гучність"
#define TR_SF_FAILSAFE "SetFailsafe"
#define TR_SF_RANGE_CHECK "RangeCheck"
#define TR_SF_MOD_BIND "ModuleBind"
#define TR_SF_RGBLEDS "RGB світлодіоди"

#define TR_SOUND "Включити Звук"
#define TR_PLAY_TRACK TR("Вкл трек", "Включити трек")
#define TR_PLAY_VALUE TR("Вкл звук", "Включити звук")
#define TR_SF_HAPTIC "Вібро"
#define TR_SF_PLAY_SCRIPT TR("Lua", "Lua скрипт")
#define TR_SF_BG_MUSIC "BgMusic"
#define TR_SF_BG_MUSIC_PAUSE "BgMusic ||"
#define TR_SF_LOGS "Журнали SD-карти"
#define TR_ADJUST_GVAR "Налаштувати"
#define TR_SF_BACKLIGHT "Підсвітка"
#define TR_SF_VARIO "Vario"
#define TR_SF_TEST "Тест"

#if LCD_W >= 212
#define TR_SF_SAFETY "Override"
#else
#define TR_SF_SAFETY "Overr."
#endif

#define TR_SF_SCREENSHOT "Скріншот"
#define TR_SF_RACING_MODE "Режим гонки"
#define TR_SF_DISABLE_TOUCH "Відкл. Сенсорний екр."
#define TR_SF_DISABLE_AUDIO_AMP "Відкл. Посилення Звуку"
#define TR_SF_SET_SCREEN "Встановити Головний Екран"

#define TR_FSW_RESET_TELEM TR("Телем", "Телеметрія")
#define TR_FSW_RESET_TIMERS "Tmr1", "Tmr2", "Tmr3"

#define TR_VFSWRESET TR_FSW_RESET_TIMERS, TR("Всі", "Політ"), TR_FSW_RESET_TELEM

#define TR_FUNCSOUNDS                                                        \
  TR("Bp1", "Beep1"), TR("Bp2", "Beep2"), TR("Bp3", "Beep3"),                \
      TR("Wrn1", "Warn1"), TR("Wrn2", "Warn2"), TR("Chee", "Cheep"),         \
      TR("Rata", "Ratata"), "Tick", TR("Sirn", "Siren"), "Ring",             \
      TR("SciF", "SciFi"), TR("Robt", "Robot"), TR("Chrp", "Chirp"), "Tada", \
      TR("Crck", "Crickt"), TR("Alrm", "AlmClk")

#define LENGTH_UNIT_IMP "фут"
#define SPEED_UNIT_IMP "миля/г"
#define LENGTH_UNIT_METR "м"
#define SPEED_UNIT_METR "км/г"

#define TR_VUNITSSYSTEM "Метрична", TR("Імпер.", "Імперська")
#define TR_VTELEMUNIT                                                        \
  "-", "В", "A", "мA", "kts", "м/с", "f/s", "км/г", "mph", "м", "фут", "°C", \
      "°F", "%", "мА/г", "Вт", "мВт", "дБ", "об/хв", "г", "°", "рад", "мл",  \
      "рідка унція", "mlm", "Гц", "мс", "мкс", "км", "дБм"

#define STR_V (STR_VTELEMUNIT[1])
#define STR_A (STR_VTELEMUNIT[2])

#define TR_VTELEMSCREENTYPE "Нема", "Nums", "Bars", "Скрипт"
#define TR_GPSFORMAT "DMS", "NMEA"

#define TR_VSWASHTYPE "---", "120", "120X", "140", "90"

#define TR_STICK_NAMES0 "Rud"
#define TR_STICK_NAMES1 "Ele"
#define TR_STICK_NAMES2 "Thr"
#define TR_STICK_NAMES3 "Ail"
#define TR_SURFACE_NAMES0 "ST"
#define TR_SURFACE_NAMES1 "TH"

#if defined(PCBNV14)
#define TR_RFPOWER_AFHDS2 "Default", "High"
#endif

#define TR_ROTARY_ENCODERS
#define TR_ROTENC_SWITCHES

#define TR_ON_ONE_SWITCHES "Вкл", "Один"

#if defined(USE_HATS_AS_KEYS)
#define TR_HATSMODE "Hats режим"
#define TR_HATSOPT "Лише трим", "Лише кнопки", "Переключателі", "Глоб"
#define TR_HATSMODE_TRIMS "Hats режим: Тримери"
#define TR_HATSMODE_KEYS "Hats режим: Кнопки"
#define TR_HATSMODE_KEYS_HELP \
  "Left side:\n"              \
  "   Right = MDL\n"          \
  "   Up = SYS\n"             \
  "   Down = TELE\n"          \
  "\n"                        \
  "Right side:\n"             \
  "   Left = PAGE<\n"         \
  "   Right = PAGE>\n"        \
  "   Up = PREV/INC\n"        \
  "   Down = NEXT/DEC"
#endif

#if defined(COLORLCD)
#define TR_ROTARY_ENC_OPT "Звичайний", "Інвертований"
#else
#define TR_ROTARY_ENC_OPT \
  "Звичайний", "Інвертований", "V-I H-N", "V-I H-A", "V-N E-I"
#endif

#if defined(IMU)
#define TR_IMU_VSRCRAW "TltX", "TltY",
#else
#define TR_IMU_VSRCRAW
#endif

#if defined(HELI)
#define TR_CYC_VSRCRAW "CYC1", "CYC2", "CYC3"
#else
#define TR_CYC_VSRCRAW "[C1]", "[C2]", "[C3]"
#endif

#define TR_SRC_BATT "Batt"
#define TR_SRC_TIME "Time"
#define TR_SRC_GPS "GPS"
#define TR_SRC_TIMER "Tmr"

#define TR_VTMRMODES "Викл", "Вкл", "Старт", "THs", "TH%", "THt"
#define TR_VTRAINER_MASTER_OFF "Викл"
#define TR_VTRAINER_MASTER_JACK "Master/Jack"
#define TR_VTRAINER_SLAVE_JACK "Slave/Jack"
#define TR_VTRAINER_MASTER_SBUS_MODULE "Master/SBUS Модуль"
#define TR_VTRAINER_MASTER_CPPM_MODULE "Master/CPPM Модуль"
#define TR_VTRAINER_MASTER_BATTERY "Master/Serial"
#define TR_VTRAINER_BLUETOOTH \
  "Master/" TR("BT", "Bluetooth"), "Slave/" TR("BT", "Bluetooth")
#define TR_VTRAINER_MULTI "Master/Multi"
#define TR_VFAILSAFE \
  "Невизначений", "Утримання", "Визначено", "Нема імпульсів", "Приймач"
#define TR_VSENSORTYPES "Визначено", "Розраховано"
#define TR_VFORMULAS                                                 \
  "Додати", "Середнє", "Мін", "Макс", "Множення", "Сума", "Комірка", \
      "Спожив.", "Дистанція"
#define TR_VPREC "0.--", "0.0 ", "0.00"
#define TR_VCELLINDEX \
  "Lowest", "1", "2", "3", "4", "5", "6", "7", "8", "Найвищий", "Дельта"
#define TR_TEXT_SIZE "Звичайний", "Крихітний", "Малий", "Середній", "Подвійний"
#define TR_SUBTRIMMODES STR_CHAR_DELTA " (тільки центр)", "= (симетрично)"
#define TR_TIMER_DIR \
  TR("Залишок", "Показати залишок"), TR("Пройшло", "Показати скільки пройшло")
#define TR_PPMUNIT "0.--", "0.0", "us"

#if defined(COLORLCD)
#if defined(BOLD)
#define TR_FONT_SIZES "STD"
#else
#define TR_FONT_SIZES "STD", "BOLD", "XXS", "XS", "L", "XL", "XXL"
#endif
#endif

#if defined(PCBFRSKY)
#define TR_ENTER "[ENTER]"
#elif defined(PCBNV14) || defined(PCBPL18)
#define TR_ENTER "[NEXT]"
#else
#define TR_ENTER "[MENU]"
#endif

#if defined(COLORLCD)
#define TR_EXIT "RTN"
#define TR_OK TR_ENTER
#else
#define TR_EXIT "EXIT"
#define TR_OK \
  TR("\010"   \
     "\010"   \
     "\010"   \
     "[OK]",  \
     "\010"   \
     "\010"   \
     "\010"   \
     "\010"   \
     "\010"   \
     "[OK]")
#endif

#if defined(PCBTARANIS)
#define TR_POPUPS_ENTER_EXIT          \
  TR(TR_EXIT "\010" TR_ENTER, TR_EXIT \
     "\010"                           \
     "\010"                           \
     "\010"                           \
     "\010" TR_ENTER)
#else
#define TR_POPUPS_ENTER_EXIT TR_ENTER "\010" TR_EXIT
#endif

#define TR_FREE "вільно"
#define TR_YES "Так"
#define TR_NO "Ні"
#define TR_DELETEMODEL "ВИДАЛИТИ МОДЕЛЬ"
#define TR_COPYINGMODEL "Копіювання моделі..."
#define TR_MOVINGMODEL "Переміщення моделі..."
#define TR_LOADINGMODEL "Завантаження моделі..."
#define TR_UNLABELEDMODEL "Неназвано"
#define TR_NAME "Назва"
#define TR_MODELNAME "Назва моделі"
#define TR_PHASENAME "Назва режиму"
#define TR_MIXNAME "Назва Mix"
#define TR_INPUTNAME TR("Вхід", "Назва входу")
#define TR_EXPONAME TR("Назва", "Назва лінії")
#define TR_BITMAP "Картинка моделі"
#define TR_NO_PICTURE "Нема картинки"
#define TR_TIMER TR("Таймер", "Таймер ")
#define TR_START "Старт"
#define TR_ELIMITS TR("Розш. ліміти", "Розширені ліміти")
#define TR_ETRIMS TR("Розш. трим", "Розширені трим")
#define TR_TRIMINC "Крок трим"
#define TR_DISPLAY_TRIMS TR("Пок. трим", "Показати трим")
#define TR_TTRACE TR("T-Джерело", INDENT "Джерело")
#define TR_TTRIM TR("T-Трим-Неакт.", INDENT "Трим тільки неактивний")
#define TR_TTRIM_SW TR("T-Трим-перекл.", INDENT "Переключатель трим")
#define TR_BEEPCTR TR("Центр. звук", "Центральний звук")
#define TR_USE_GLOBAL_FUNCS TR("Глоб. ф-ції", "Використ. глобальні функції")
#define TR_PROTOCOL TR("Протокол", "Протокол")
#define TR_PPMFRAME INDENT "PPM фрейм"
#define TR_REFRESHRATE TR(INDENT "Оновити", INDENT "Частота оновлень")
#define STR_WARN_BATTVOLTAGE \
  TR(INDENT "Вихід VBAT: ", INDENT "Увага: вихідний рівень VBAT: ")
#define TR_WARN_5VOLTS "Увага: вихідний рівень 5 вольт"
#define TR_MS "мс"
#define TR_SWITCH "Переключатель"
#define TR_FUNCTION_SWITCHES "Спеціальні переключателі"
#define TR_SF_SWITCH "Тригер"
#define TR_TRIMS "Тріми"
#define TR_FADEIN "Затух. спочатку"
#define TR_FADEOUT "Затух. в кінці"
#define TR_DEFAULT "(по-замовч.)"
#if defined(COLORLCD)
#define TR_CHECKTRIMS "Перевірте FM Тріми"
#else
#define TR_CHECKTRIMS CENTER "\006Перевірте\012тріми"
#endif
#define OFS_CHECKTRIMS CENTER_OFS + (9 * FW)
#define TR_SWASHTYPE "Тип повороту"
#define TR_COLLECTIVE TR("Collective", "Coll. pitch source")
#define TR_AILERON TR("Lateral cyc.", "Lateral cyc. source")
#define TR_ELEVATOR TR("Long. cyc.", "Long. cyc. source")
#define TR_SWASHRING "Поворот"
#define TR_MODE "Режим"
#if LCD_W > LCD_H
#define TR_LEFT_STICK "Ліво"
#else
#define TR_LEFT_STICK "Ліво"
#endif
#define TR_SUBTYPE INDENT "Subtype"
#define TR_NOFREEEXPO "No free expo!"
#define TR_NOFREEMIXER "No free mixer!"
#define TR_SOURCE "Джерело"
#define TR_WEIGHT "Вага"
#define TR_SIDE "Сторона"
#define TR_OFFSET "Зсув"
#define TR_TRIM "Trim"
#define TR_DREX "DRex"
#define DREX_CHBOX_OFFSET 30
#define TR_CURVE "Крива"
#define TR_FLMODE TR("Режим", "Режими")
#define TR_MIXWARNING "Увага"
#define TR_OFF "Викл"
#define TR_ANTENNA "Антена"
#define TR_NO_INFORMATION TR("Нема інформ.", "Нема інформації")
#define TR_MULTPX "Мультиплексування"
#define TR_DELAYDOWN TR("Зменш. затримку", "Зменшити затримка")
#define TR_DELAYUP "Збільшити затримку"
#define TR_SLOWDOWN TR("Зменш. сповіл.", "Зменшити сповільнення")
#define TR_SLOWUP "Збільшити сповільнення"
#define TR_MIXES "MIXES"
#define TR_CV "CV"
#if defined(PCBNV14) || defined(PCBPL18)
#define TR_GV "GV"
#else
#define TR_GV TR("G", "GV")
#endif
#define TR_RANGE INDENT "Діапазон"
#define TR_CENTER INDENT "Центр"
#define TR_ALARM "Сигналізація"
#define TR_BLADES "Blades/Poles"
#define TR_SCREEN "Екран\001"
#define TR_SOUND_LABEL "Звук"
#define TR_LENGTH "Length"
#define TR_BEEP_LENGTH "Тривал. сигн."
#define TR_BEEP_PITCH "Тон сигн."
#define TR_HAPTIC_LABEL "Haptic"
#define TR_STRENGTH "Strength"
#define TR_IMU_LABEL "IMU"
#define TR_IMU_OFFSET "Зсув"
#define TR_IMU_MAX "Макс."
#define TR_CONTRAST "Контраст"
#define TR_ALARMS_LABEL "Сигналізації"
#define TR_BATTERY_RANGE TR("Діапазон бат.", "Діапазон виміру батареї")
#define TR_BATTERYCHARGING "Зарядка..."
#define TR_BATTERYFULL "Повністю заряджений"
#define TR_BATTERYNONE "Нема!"
#define TR_BATTERYWARNING "Низький заряд"
#define TR_INACTIVITYALARM "Неактивий"
#define TR_MEMORYWARNING "Мало пам'яті"
#define TR_ALARMWARNING "Звук відключений"
#define TR_RSSI_SHUTDOWN_ALARM TR("RSSI shutdown", "Check RSSI on shutdown")
#define TR_MODEL_STILL_POWERED "Model still powered"
#define TR_TRAINER_STILL_CONNECTED "Trainer still connected"
#define TR_USB_STILL_CONNECTED "USB все ще підключений"
#define TR_MODEL_SHUTDOWN "Виключити?"
#define TR_PRESS_ENTER_TO_CONFIRM "Натисніть Enter для підтвердження"
#define TR_THROTTLE_LABEL "Throttle"
#define TR_THROTTLE_START "Throttle Start"
#define TR_THROTTLEREVERSE TR("T-Reverse", INDENT "Reverse")
#define TR_MINUTEBEEP TR("Minute", "Minute call")
#define TR_BEEPCOUNTDOWN INDENT "Зворотній відлік"
#define TR_PERSISTENT TR(INDENT "Persist.", INDENT "Persistent")
#define TR_BACKLIGHT_LABEL "Backlight"
#define TR_GHOST_MENU_LABEL "GHOST MENU"
#define TR_STATUS "Статус"
#define TR_BLDELAY INDENT "Тривалість"
#define TR_BLONBRIGHTNESS INDENT "ВКЛ підсвітку"
#define TR_BLOFFBRIGHTNESS INDENT "ВИКЛ підсвітку"
#define TR_KEYS_BACKLIGHT "Keys backlight"
#define TR_BLCOLOR "Колір"
#define TR_SPLASHSCREEN "Splash screen"
#define TR_PLAY_HELLO "Звук Включення"
#define TR_PWR_ON_DELAY "Pwr On delay"
#define TR_PWR_OFF_DELAY "Pwr Off delay"
#define TR_THROTTLE_WARNING TR(INDENT "T-Warning", INDENT "Throttle state")
#define TR_CUSTOM_THROTTLE_WARNING           \
  TR(INDENT INDENT INDENT INDENT "Cust-Pos", \
     INDENT INDENT INDENT INDENT "Custom position?")
#define TR_CUSTOM_THROTTLE_WARNING_VAL TR("Поз. %", "Позиція %")
#define TR_SWITCHWARNING TR(INDENT "S-Warning", INDENT "Позиції переключателів")
#define TR_POTWARNINGSTATE \
  TR(INDENT "Pot&Slid.", INDENT "Потенціометри & повзунки")
#define TR_SLIDERWARNING TR(INDENT "Slid. pos.", INDENT "Slider positions")
#define TR_POTWARNING TR(INDENT "Pot warn.", INDENT "Pot positions")
#define TR_TIMEZONE "Часовий пояс"
#define TR_ADJUST_RTC "Змінити RTC"
#define TR_GPS "GPS"
#define TR_DEF_CHAN_ORD TR("Def chan order", "Default channel order")
#define TR_STICKS "Осі"
#define TR_POTS "Потенціометр"
#define TR_SWITCHES "Переключателі"
#define TR_SWITCHES_DELAY TR("Play delay", "Play delay (sw. mid pos)")
#define TR_SLAVE CENTER "Slave"
#define TR_MODESRC "Mode\006% Source"
#define TR_MULTIPLIER "Множник"
#define TR_CAL "Дзвінок"
#define TR_CALIBRATION "Калібрування"
#define TR_VTRIM "Trim - +"
#define TR_CALIB_DONE "Калібрування завершено"
#if defined(PCBHORUS)
#define TR_MENUTOSTART "Press [Enter] to start"
#define TR_SETMIDPOINT "Center sticks/pots/повзунки and press [Enter]"
#define TR_MOVESTICKSPOTS "Move axis/pots/повзунки and press [Enter]"
#elif defined(COLORLCD)
#define TR_MENUTOSTART TR_ENTER " TO START"
#define TR_SETMIDPOINT "CENTER AXIS/SLIDERS"
#define TR_MOVESTICKSPOTS "MOVE AXIS/POTS"
#else
#define TR_MENUTOSTART CENTER "\010" TR_ENTER " ДО СТАРТУ"
#if defined(SURFACE_RADIO)
#define TR_SETMIDPOINT CENTER "\006SET POTS MIDPOINT"
#define TR_MOVESTICKSPOTS CENTER "\002MOVE ST/TH/POTS/AXIS"
#else
#define TR_SETMIDPOINT \
  TR(CENTER "\006SET AXIS MIDPOINT", CENTER "\004CENTER AXIS/SLIDERS")
#define TR_MOVESTICKSPOTS CENTER "\007MOVE AXIS/POTS"
#endif
#define TR_MENUWHENDONE CENTER "\006" TR_ENTER " ПО ГОТОВНОСТІ"
#endif
#define TR_TXnRX "Tx:\0Rx:"
#define OFS_RX 4
#define TR_NODATA CENTER "НЕМА ДАНИХ"
#define TR_US "us"
#define TR_HZ "Hz"
#define TR_TMIXMAXMS "Tmix макс."
#define TR_FREE_STACK "Вільний стек"
#define TR_INT_GPS_LABEL "Внутр. GPS"
#define TR_HEARTBEAT_LABEL "Heartbeat"
#define TR_LUA_SCRIPTS_LABEL "Lua скрипти"
#define TR_FREE_MEM_LABEL "Вільно пам'яті"
#define TR_DURATION_MS TR("[Т]", "Тривалість(мс): ")
#define TR_INTERVAL_MS TR("[І]", "Інтервал(мс): ")
#define TR_MEM_USED_SCRIPT "Скрипт(B): "
#define TR_MEM_USED_WIDGET "Віджет(B): "
#define TR_MEM_USED_EXTRA "Додаткове(B): "
#define TR_STACK_MIX "Мікс: "
#define TR_STACK_AUDIO "Звук: "
#define TR_GPS_FIX_YES "Виправити: Так"
#define TR_GPS_FIX_NO "Виправити: Ні"
#define TR_GPS_SATS "Статистика: "
#define TR_GPS_HDOP "Hdop: "
#define TR_STACK_MENU "Меню: "
#define TR_TIMER_LABEL "Таймер"
#define TR_THROTTLE_PERCENT_LABEL "Газ %"
#define TR_BATT_LABEL "Батарея"
#define TR_SESSION "Сесія"
#define TR_MENUTORESET TR_ENTER " До скидання"
#define TR_PPM_TRAINER "TR"
#define TR_CH "CH"
#define TR_MODEL "МОДЕЛЬ"
#if defined(SURFACE_RADIO)
#define TR_FM "DM"
#else
#define TR_FM "FM"
#endif
#define TR_EEPROMLOWMEM "Мало EEPROM пам'яті"
#define TR_PRESS_ANY_KEY_TO_SKIP "Натис. будь-яку кнопку"
#define TR_THROTTLE_NOT_IDLE "Газ включений"
#define TR_ALARMSDISABLED "Сигналізація викл."
#define TR_PRESSANYKEY \
  TR("\010Натис. будь-яку кнопку", "Натисніть будь-яку кнопку")
#define TR_BADEEPROMDATA "Некоректні дані EEPROM"
#define TR_BAD_RADIO_DATA "Немає або некоректні дані пульта"
#define TR_RADIO_DATA_RECOVERED                \
  TR3("Використ. резерв. дані пульта",         \
      "Використовуються резервні дані пульта", \
      "Налаштування пульта відновлені з резервної копії")
#define TR_RADIO_DATA_UNRECOVERABLE                         \
  TR3("Radio settings invalid", "Radio settings not valid", \
      "Unable to read valid radio settings")
#define TR_EEPROMFORMATTING "Форматувати EEPROM"
#define TR_STORAGE_FORMAT "Підготовка сховища"
#define TR_EEPROMOVERFLOW "Переповнення EEPROM"
#define TR_RADIO_SETUP "НАЛАШТ. ПУЛЬТА"
#define TR_MENUTRAINER "ТРЕЙНЕР"
#define TR_MENUSPECIALFUNCS "ГЛОБАЛЬНІ ФУНКЦІЇ"
#define TR_MENUVERSION "ВЕРСІЯ"
#define TR_MENU_RADIO_SWITCHES TR("ПЕРЕКЛЮЧАТЕЛІ", "ТЕСТ ПЕРЕКЛЮЧАТЕЛІВ")
#define TR_MENU_RADIO_ANALOGS TR("АНАЛОГИ", "ТЕСТ АНАЛОГІВ")
#define TR_MENU_RADIO_ANALOGS_CALIB "АНАЛОГИ ВІДКАЛІБРОВАНО"
#define TR_MENU_RADIO_ANALOGS_RAWLOWFPS "RAW АНАЛОГИ (5 Hz)"
#define TR_MENUCALIBRATION "КАЛІБРОВКА"
#define TR_MENU_FSWITCH "ЗМІННІ ПЕРЕКЛЮЧАТЕЛІ"
#if defined(COLORLCD)
#define TR_TRIMS2OFFSETS "Trims => Subtrims"
#else
#define TR_TRIMS2OFFSETS "\006Trims => Subtrims"
#endif
#define TR_CHANNELS2FAILSAFE "Channels=>Failsafe"
#define TR_CHANNEL2FAILSAFE "Channel=>Failsafe"
#define TR_MENUMODELSEL TR("MODELSEL", "MODEL SELECTION")
#define TR_MENU_MODEL_SETUP TR("SETUP", "MODEL SETUP")
#if defined(SURFACE_RADIO)
#define TR_MENUFLIGHTMODES "DRIVE MODES"
#define TR_MENUFLIGHTMODE "DRIVE MODE"
#else
#define TR_MENUFLIGHTMODES "РЕЖИМИ ПОЛЬОТУ"
#define TR_MENUFLIGHTMODE "РЕЖИМ ПОЛЬОТУ"
#endif
#define TR_MENUHELISETUP "HELI НАЛАШТ."

#define TR_MENUINPUTS "ВХОДИ"
#define TR_MENULIMITS "ВИХОДИ"
#define TR_MENUCURVES "КРИВІ"
#define TR_MENUCURVE "КРИВА"
#define TR_MENULOGICALSWITCH "ЛОГІЧНИЙ ПЕРЕКЛЮЧАТЕЛЬ"
#define TR_MENULOGICALSWITCHES "ЛОГІЧНІ ПЕРЕКЛЮЧАТЕЛІ"
#define TR_MENUCUSTOMFUNC "СПЕЦ. ФУНКЦІЇ"
#define TR_MENUCUSTOMSCRIPTS "СВОЇ СКРИПТИ"
#define TR_MENUTELEMETRY "ТЕЛЕМЕТРІЯ"
#define TR_MENUSTAT "СТАТИСТИКА"
#define TR_MENUDEBUG "ВІДЛАГОДЖЕННЯ"
#define TR_MONITOR_CHANNELS1 "КАНАЛИ МОНІТОРУ 1-8"
#define TR_MONITOR_CHANNELS2 "КАНАЛИ МОНІТОРУ 9-16"
#define TR_MONITOR_CHANNELS3 "КАНАЛИ МОНІТОРУ 17-24"
#define TR_MONITOR_CHANNELS4 "КАНАЛИ МОНІТОРУ 25-32"
#define TR_MONITOR_SWITCHES "ЛОГІЧНІ ПЕРЕКЛЮЧАТЕЛІ МОНІТОРУ"
#define TR_MONITOR_OUTPUT_DESC "Виходи"
#define TR_MONITOR_MIXER_DESC "Мікшери"
#define TR_RECEIVER_NUM TR("Rx #", "Приймач #")
#define TR_RECEIVER "Приймач"
#define TR_MULTI_RFTUNE TR("Налаштування частоти", "Налаштування RF частоти")
#define TR_MULTI_RFPOWER "RF живлення"
#define TR_MULTI_WBUS "Вивід"
#define TR_MULTI_TELEMETRY "Телеметрія"
#define TR_MULTI_VIDFREQ TR("Част. відео", "Частота відео")
#define TR_RF_POWER "RF живлення"
#define TR_MULTI_FIXEDID TR("FixedID", "Fixed ID")
#define TR_MULTI_OPTION TR("Опція", "Значення опції")
#define TR_MULTI_AUTOBIND \
  TR(INDENT "Прив'язка каналу", INDENT "Прив'язати до каналу")
#define TR_DISABLE_CH_MAP TR("Відкл. мапу каналів", "Відключити мапу каналів")
#define TR_DISABLE_TELEM TR("Викл. Телем.", "Відключити Телеметрію")
#define TR_MULTI_DSM_AUTODTECT \
  TR(INDENT "Автовизначення", INDENT "Формат автовизначення")
#define TR_MULTI_LOWPOWER \
  TR(INDENT "Режим низького живл.", INDENT "Режим низького живлення")
#define TR_MULTI_LNA_DISABLE INDENT "Відкл. LNA"
#define TR_MODULE_TELEMETRY TR(INDENT "S.Port", INDENT "S.Port link")
#define TR_MODULE_TELEM_ON TR("Вкл", "Включено")
#define TR_DISABLE_INTERNAL TR("Відкл. внутр.", "Відключити внутрішній RF")
#define TR_MODULE_NO_SERIAL_MODE TR("!Serial режим", "Не в Serial режимі")
#define TR_MODULE_NO_INPUT TR("Нема вхідних даних", "Нема Serial вхідних даних")
#define TR_MODULE_NO_TELEMETRY                      \
  TR3("Викл. Телем.", "Виключений MULTI_TELEMETRY", \
      "Виявлений виключений MULTI_TELEMETRY")
#define TR_MODULE_WAITFORBIND "Bind to load protocol"
#define TR_MODULE_BINDING TR("Прив'язка...", "Прив'язування")
#define TR_MODULE_UPGRADE_ALERT                            \
  TR3("Необхідне оновлення", "Необхідне оновлення модуля", \
      "Необхідне\nОновлення Модуля")
#define TR_MODULE_UPGRADE \
  TR("Рекомендовано оновлення", "Рекомендовано оновлення модуля")
#define TR_REBIND "Необх. переприв'язка"
#define TR_REG_OK "Регістрація успішна"
#define TR_BIND_OK "Прив'язка успішна"
#define TR_BINDING_CH1_8_TELEM_ON "Ch1-8 Телем. ВКЛ"
#define TR_BINDING_CH1_8_TELEM_OFF "Ch1-8 Телем. ВИКЛ"
#define TR_BINDING_CH9_16_TELEM_ON "Ch9-16 Телем. ВКЛ"
#define TR_BINDING_CH9_16_TELEM_OFF "Ch9-16 Телем. ВИКЛ"
#define TR_PROTOCOL_INVALID TR("Невірний протокол", "Невірний протокол")
#define TR_MODULE_STATUS TR(INDENT "Статус", INDENT "Статус Модуля")
#define TR_MODULE_SYNC \
  TR(INDENT "Синхронізація", INDENT "Статус синхронізації протоколу")
#define TR_MULTI_SERVOFREQ TR("Servo rate", "Servo update rate")
#define TR_MULTI_MAX_THROW TR("Макс. хід", "Вкл. макс. хід")
#define TR_MULTI_RFCHAN TR("RF Канал", "Вибрати RF канал")
#define TR_AFHDS3_RX_FREQ TR("RX част.", "RX частота")
#define TR_AFHDS3_ONE_TO_ONE_TELEMETRY TR("Unicast/Tel.", "Unicast/Telemetry")
#define TR_AFHDS3_ONE_TO_MANY "Multicast"
#define TR_AFHDS3_ACTUAL_POWER TR("Поточ. жив.", "Поточне живлення")
#define TR_AFHDS3_POWER_SOURCE TR("Джерело жив.", "Джерело живлення")
#define TR_FLYSKY_TELEMETRY \
  TR("FlySky RSSI #", "Use FlySky RSSI value without rescalling")
#define TR_GPS_COORDS_FORMAT TR("GPS координати", "Формат координат")
#define TR_VARIO TR("Варіом.", "Варіометр")
#define TR_PITCH_AT_ZERO "Pitch zero"
#define TR_PITCH_AT_MAX "Pitch max"
#define TR_REPEAT_AT_ZERO "Repeat zero"
#define TR_BATT_CALIB TR("Каліб. Бат.", "Калібрування Батареї")
#define TR_CURRENT_CALIB "Каліб. струму"
#define TR_VOLTAGE TR(INDENT "Вольтаж", INDENT "Джерело вольтажу")
#define TR_SELECT_MODEL "Вибір моделі"
#define TR_MANAGE_MODELS "КЕРУВ. МОДЕЛЯМИ"
#define TR_MODELS "Моделі"
#define TR_SELECT_MODE "Вибрати режим"
#define TR_CREATE_MODEL "Створити режим"
#define TR_FAVORITE_LABEL "Улюблені"
#define TR_MODELS_MOVED "Невикорист. моделі переміщ."
#define TR_NEW_MODEL "Нова Модель"
#define TR_INVALID_MODEL "Неправ. Моедль"
#define TR_EDIT_LABELS "Редагування Назви"
#define TR_LABEL_MODEL "Назва моделі"
#define TR_MOVE_UP "Вгору"
#define TR_MOVE_DOWN "Вниз"
#define TR_ENTER_LABEL "Ввести Назву"
#define TR_LABEL "Назва"
#define TR_LABELS "Назви"
#define TR_CURRENT_MODEL "Струм"
#define TR_ACTIVE "Активний"
#define TR_NEW "Новий"
#define TR_NEW_LABEL "Нова Назва"
#define TR_RENAME_LABEL "Переназвати"
#define TR_DELETE_LABEL "Видалити назву"
#define TR_DUPLICATE_MODEL "Дублювати модель"
#define TR_COPY_MODEL "Копіювати модель"
#define TR_MOVE_MODEL "Перемістити модель"
#define TR_BACKUP_MODEL "Резервна модель"
#define TR_DELETE_MODEL "Видалити модель"
#define TR_RESTORE_MODEL "Відновити модель"
#define TR_DELETE_ERROR "Помилка видалення"
#define TR_SDCARD_ERROR TR("Помилка SD", "Помилка SD-карти")
#define TR_SDCARD "SD Карта"
#define TR_NO_FILES_ON_SD "Нема файлів на SD!"
#define TR_NO_SDCARD "Нема SD карти"
#define TR_WAITING_FOR_RX "Очікування RX..."
#define TR_WAITING_FOR_TX "Очікування TX..."
#define TR_WAITING_FOR_MODULE TR("Очікування модуля", "Очікування модуля...")
#define TR_NO_TOOLS "Нема інструментів"
#define TR_NORMAL "Звичайний"
#define TR_NOT_INVERTED "Не інвертований"
#define TR_NOT_CONNECTED TR("Не підключено", "Не підключено");
#define TR_CONNECTED "Підключено"
#define TR_FLEX_915 "Flex 915MHz"
#define TR_FLEX_868 "Flex 868MHz"
#define TR_16CH_WITHOUT_TELEMETRY TR("16CH без телем.", "16CH без телеметрії")
#define TR_16CH_WITH_TELEMETRY TR("16CH з телем.", "16CH з телеметрією")
#define TR_8CH_WITH_TELEMETRY TR("8CH with telem.", "8CH з телеметрією")
#define TR_EXT_ANTENNA "Зовн. антена"
#define TR_PIN "Вивід"
#define TR_UPDATE_RX_OPTIONS "Оновити RX опції?"
#define TR_UPDATE_TX_OPTIONS "Оновити TX опції?"
#define TR_MODULES_RX_VERSION "Модулі / RX версія"
#define TR_SHOW_MIXER_MONITORS "Показати мікшер моніторів"
#define TR_MENU_MODULES_RX_VERSION "МОДУЛІ / RX ВЕРСІЯ"
#define TR_MENU_FIRM_OPTIONS "ОПЦІЇ ПРОШИВКИ"
#define TR_IMU "IMU"
#define TR_STICKS_POTS_SLIDERS "Axis/Потенціометри/Повзунки"
#define TR_PWM_STICKS_POTS_SLIDERS "PWM Axis/Потенціометри/Повзунки"
#define TR_RF_PROTOCOL "RF Протокол"
#define TR_MODULE_OPTIONS "Опції Модуля"
#define TR_POWER "Живлення"
#define TR_NO_TX_OPTIONS "Нема TX опцій"
#define TR_RTC_BATT "RTC батарея"
#define TR_POWER_METER_EXT "Power Meter (EXT)"
#define TR_POWER_METER_INT "Power Meter (INT)"
#define TR_SPECTRUM_ANALYSER_EXT "Spectrum (EXT)"
#define TR_SPECTRUM_ANALYSER_INT "Spectrum (INT)"
#define TR_SDCARD_FULL "SD карта повна"
#if defined(COLORLCD)
#define TR_SDCARD_FULL_EXT TR_SDCARD_FULL "\nЖуртали та Скріншоти відключені"
#else
#define TR_SDCARD_FULL_EXT \
  TR_SDCARD_FULL "\036Журнали & Скріншоти" LCDW_128_480_LINEBREAK "відключені"
#endif
#define TR_NEEDS_FILE "ПОТРЕБУЄ ФАЙЛ"
#define TR_EXT_MULTI_SPEC "opentx-inv"
#define TR_INT_MULTI_SPEC "stm-opentx-noinv"
#define TR_INCOMPATIBLE "Несумісне"
#define TR_WARNING "УВАГА"
#define TR_EEPROMWARN "EEPROM"
#define TR_STORAGE_WARNING "НАКОПИЧУВАЧ"
#define TR_EEPROM_CONVERTING "Converting EEPROM"
#define TR_SDCARD_CONVERSION_REQUIRE "SD card conversion required"
#define TR_CONVERTING "Converting: "
#define TR_THROTTLE_UPPERCASE "THROTTLE"
#define TR_ALARMSWARN "ALARMS"
#define TR_SWITCHWARN TR("SWITCH", "CONTROL")
#define TR_FAILSAFEWARN "FAILSAFE"
#define TR_TEST_WARNING TR("TESTING", "TEST BUILD")
#define TR_TEST_NOTSAFE "Use for tests only"
#define TR_WRONG_SDCARDVERSION TR("Expected ver: ", "Expected version: ")
#define TR_WARN_RTC_BATTERY_LOW "RTC Battery low"
#define TR_WARN_MULTI_LOWPOWER "Low power mode"
#define TR_BATTERY "BATTERY"
#define TR_WRONG_PCBREV "Wrong PCB detected"
#define TR_EMERGENCY_MODE "EMERGENCY MODE"
#define TR_NO_FAILSAFE "Failsafe not set"
#define TR_KEYSTUCK "Key stuck"
#define TR_VOLUME "Volume"
#define TR_LCD "LCD"
#define TR_BRIGHTNESS "Brightness"
#define TR_CPU_TEMP "CPU temp."
#define TR_COPROC "CoProc."
#define TR_COPROC_TEMP "MB Temp."
#define TR_TEMPWARNING INDENT "Overheat"
#define TR_TTL_WARNING "Warning: use 3.3V logic levels"
#define TR_FUNC "Function"
#define TR_V1 "V1"
#define TR_V2 "V2"
#define TR_DURATION "Duration"
#define TR_DELAY "Delay"
#define TR_SD_CARD "SD CARD"
#define TR_SDHC_CARD "SD-HC CARD"
#define TR_NO_SOUNDS_ON_SD "No sounds on SD"
#define TR_NO_MODELS_ON_SD "No models on SD"
#define TR_NO_BITMAPS_ON_SD "No bitmaps on SD"
#define TR_NO_SCRIPTS_ON_SD "No scripts on SD"
#define TR_SCRIPT_SYNTAX_ERROR TR("Syntax error", "Script syntax error")
#define TR_SCRIPT_PANIC "Script panic"
#define TR_SCRIPT_KILLED "Script killed"
#define TR_SCRIPT_ERROR "Unknown error"
#define TR_PLAY_FILE "Play"
#define TR_DELETE_FILE "Delete"
#define TR_COPY_FILE "Copy"
#define TR_RENAME_FILE "Rename"
#define TR_ASSIGN_BITMAP "Assign bitmap"
#define TR_ASSIGN_SPLASH "Splash screen"
#define TR_EXECUTE_FILE "Виконати"
#define TR_REMOVED " removed"
#define TR_SD_INFO "Інформація"
#define TR_NA "Недоступ."
#define TR_HARDWARE "ОБЛАДНАННЯ"
#define TR_FORMATTING "Форматування..."
#define TR_TEMP_CALIB "Темп. каліб."
#define TR_TIME "Час"
#define TR_MAXBAUDRATE "Макс. бод"
#define TR_BAUDRATE "Швидкість(бод)"
#define TR_SAMPLE_MODE TR("Вибірка", "Режим Вибірки")
#define TR_SAMPLE_MODES "Звичайний", "OneBit"
#define TR_LOADING "Завантаження..."
#define TR_DELETE_THEME "Видалити Тему?"
#define TR_SAVE_THEME "Зберігти Тему?"
#define TR_EDIT_COLOR "Змінити Колір"
#define TR_NO_THEME_IMAGE "Нема картинки теми"
#define TR_BACKLIGHT_TIMER "Таймаут бездіяльності"

#if defined(COLORLCD)
#define TR_MODEL_QUICK_SELECT "Швидкий вибір моделі"
#endif

#define TR_SELECT_TEMPLATE_FOLDER "Виберіть папку шаблонів"
#define TR_SELECT_TEMPLATE "ВИБЕРІТЬ ШАБЛОН МОДЕЛІ:"
#define TR_NO_TEMPLATES "Не знайдено шаблонів моделей в папці"
#define TR_SAVE_TEMPLATE "Зберігти як шаблон"
#define TR_BLANK_MODEL "Пуста Модель"
#define TR_BLANK_MODEL_INFO "Створити пусту модель"
#define TR_FILE_EXISTS "ФАЙЛ ВЖЕ ІСНУЄ"
#define TR_ASK_OVERWRITE "Чи бажаєте перезаписати?"

#define TR_BLUETOOTH "Bluetooth"
#define TR_BLUETOOTH_DISC "Discover"
#define TR_BLUETOOTH_INIT "Init"
#define TR_BLUETOOTH_DIST_ADDR "Dist addr"
#define TR_BLUETOOTH_LOCAL_ADDR "Local addr"
#define TR_BLUETOOTH_PIN_CODE "PIN код"
#define TR_BLUETOOTH_NODEVICES "Не Знайдено Пристроїв"
#define TR_BLUETOOTH_SCANNING "Сканування..."
#define TR_BLUETOOTH_BAUDRATE "BT швидкість(бод)"
#if defined(PCBX9E)
#define TR_BLUETOOTH_MODES "---", "Активовано"
#else
#define TR_BLUETOOTH_MODES "---", "Телеметрія", "Трейнер"
#endif

#define TR_SD_INFO_TITLE "SD ІНФОРМАЦІЯ"
#define TR_SD_TYPE "Тип:"
#define TR_SD_SPEED "Швидкість:"
#define TR_SD_SECTORS "Секторів:"
#define TR_SD_SIZE "Розмір:"
#define TR_TYPE INDENT "Тип"
#define TR_GLOBAL_VARS "Глобальні змінні"
#define TR_GVARS "GVARS"
#define TR_GLOBAL_VAR "Глобальна змінна"
#define TR_MENU_GLOBAL_VARS "ГЛОБАЛЬНІ ЗМІННІ"
#define TR_OWN "Власна"
#define TR_DATE "Дата"
#define TR_MONTHS                                                              \
  {                                                                            \
    «Січ», «Лют», «Бер», «Квіт», «Трав», «Черв», «Лип», «Серп», «Вер», «Жовт», \
        "Лист", "Груд"                                                     \
  }
#define TR_ROTARY_ENCODER "R.E."
#define TR_ROTARY_ENC_MODE TR("Режим RotEnc", "Rotary Encoder Режим")
#define TR_CHANNELS_MONITOR "КАНАЛИ МОНІТОРУ"
#define TR_MIXERS_MONITOR "МОНІТОР МІКШЕРІВ"
#define TR_PATH_TOO_LONG "Шлях надто довгий"
#define TR_VIEW_TEXT "Переглянути текст"
#define TR_FLASH_BOOTLOADER "Прошити завантажувач"
#define TR_FLASH_DEVICE TR("Прошити пристрій", "Прошити пристрій")
#define TR_FLASH_EXTERNAL_DEVICE \
  TR("Прошити пристрій S.Port", "Прошити пристрій S.Port")
#define TR_FLASH_RECEIVER_OTA "Прошити OTA приймача"
#define TR_FLASH_RECEIVER_BY_EXTERNAL_MODULE_OTA "Прошити RX зовн. OTA"
#define TR_FLASH_RECEIVER_BY_INTERNAL_MODULE_OTA "Прошити RX внутр. OTA"
#define TR_FLASH_FLIGHT_CONTROLLER_BY_EXTERNAL_MODULE_OTA "Прошити FC зовн. OTA"
#define TR_FLASH_FLIGHT_CONTROLLER_BY_INTERNAL_MODULE_OTA \
  "Прошити FC внутр. OTA"
#define TR_FLASH_BLUETOOTH_MODULE \
  TR("Прошити BT модуля", "Прошивка Bluetooth модуля")
#define TR_FLASH_POWER_MANAGEMENT_UNIT "Прошивка блоку живлення"
#define TR_DEVICE_NO_RESPONSE \
  TR("Пристрій не відповідає", "Пристрій не відповідає")
#define TR_DEVICE_FILE_ERROR \
  TR("Отримання файлу пристрою", "Отримання файлу пристрою")
#define TR_DEVICE_DATA_REFUSED \
  TR("Дані пристрою відхилені", "Дані пристрою відхилені")
#define TR_DEVICE_WRONG_REQUEST \
  TR("Device access problem", "Device access problem")
#define TR_DEVICE_FILE_REJECTED \
  TR("Файл девайсу відхилено", "Файл девайсу відхилено")
#define TR_DEVICE_FILE_WRONG_SIG \
  TR("Невірна сигнатура файлу", "Невірна сигнатура файлу пристрою")
#define TR_CURRENT_VERSION TR("Поточ. версія: ", "Поточна версія: ")
#define TR_FLASH_INTERNAL_MODULE \
  TR("Прошивка внутр. модуля", "Прошивка внутрішнього модуля")
#define TR_FLASH_INTERNAL_MULTI \
  TR("Прошивка внутр. Multi", "Прошивка внутрішнього Multi")
#define TR_FLASH_EXTERNAL_MODULE \
  TR("Прошивка зовн. модуля", "Прошивка зовнішнього модуля")
#define TR_FLASH_EXTERNAL_MULTI \
  TR("Прошивка зовн. Multi", "Прошивка Зовнішнього Multi")
#define TR_FLASH_EXTERNAL_ELRS \
  TR("Прошивка зовн. ELRS", "Прошивка Зовнішньої ELRS")
#define TR_FIRMWARE_UPDATE_ERROR \
  TR("Помилка оновлення FW", "Помилка оновлення прошивки")
#define TR_FIRMWARE_UPDATE_SUCCESS "Прошивання успішне"
#define TR_WRITING "Запис..."
#define TR_CONFIRM_FORMAT "Підтвердити Формат?"
#define TR_INTERNALRF "Внутрішній RF"
#define TR_INTERNAL_MODULE TR("Внутр. модуль", "Internal модуль")
#define TR_EXTERNAL_MODULE TR("Зовн. модуль", "Зовнішній модуль")
#define TR_OPENTX_UPGRADE_REQUIRED "Необхідно оновлення OpenTX"
#define TR_TELEMETRY_DISABLED "Телем. відключено"
#define TR_MORE_OPTIONS_AVAILABLE "Доступно більше опцій"
#define TR_NO_MODULE_INFORMATION "Нема інформації про модуль"
#define TR_EXTERNALRF "External RF"
#define TR_FAILSAFE TR(INDENT "Failsafe", INDENT "Failsafe режим")
#define TR_FAILSAFESET "FAILSAFE НАЛАШТУВАННЯ"
#define TR_REG_ID "Reg. ID"
#define TR_OWNER_ID "ID власника"
#define TR_HOLD "Затиснути"
#define TR_HOLD_UPPERCASE "ЗАТИСНУТИ"
#define TR_NONE "Нема"
#define TR_NONE_UPPERCASE "НЕМА"
#define TR_MENUSENSOR "СЕНСОР"
#define TR_POWERMETER_PEAK "Пікова"
#define TR_POWERMETER_POWER "Потужність"
#define TR_POWERMETER_ATTN "Послаб."
#define TR_POWERMETER_FREQ "Частота"
#define TR_MENUTOOLS "ІНСТРУМЕНТИ"
#define TR_TURN_OFF_RECEIVER "Відключити приймач"
#define TR_STOPPING "Зупинення..."
#define TR_MENU_SPECTRUM_ANALYSER "СПЕКТР. АНАЛІЗАТОР"
#define TR_MENU_POWER_METER "POWER METER"
#define TR_SENSOR "SENSOR"
#define TR_COUNTRY_CODE "Country code"
#define TR_USBMODE "USB mode"
#define TR_JACK_MODE "Jack mode"
#define TR_VOICE_LANGUAGE "Мова голосу"
#define TR_UNITS_SYSTEM "Одиниці"
#define TR_UNITS_PPM "PPM одиниці"
#define TR_EDIT "Змінити"
#define TR_INSERT_BEFORE "Вставити перед"
#define TR_INSERT_AFTER "Вставити після"
#define TR_COPY "Скопіювати"
#define TR_MOVE "Перемістити"
#define TR_PASTE "Вставити"
#define TR_PASTE_AFTER "Вставити після"
#define TR_PASTE_BEFORE "Вставити перед"
#define TR_DELETE "Видалити"
#define TR_INSERT "Вставити"
#define TR_RESET_FLIGHT "Скинути сесію"
#define TR_RESET_TIMER1 "Скинути timer1"
#define TR_RESET_TIMER2 "Скинути timer2"
#define TR_RESET_TIMER3 "Скинути timer3"
#define TR_RESET_TELEMETRY "Скинути телеметрію"
#define TR_STATISTICS "Статистика"
#define TR_ABOUT_US "Інформація"
#define TR_USB_JOYSTICK "USB джойстик (HID)"
#define TR_USB_MASS_STORAGE "USB накопичувач (SD)"
#define TR_USB_SERIAL "USB Serial (VCP)"
#define TR_SETUP_SCREENS "Setup screens"
#define TR_MONITOR_SCREENS "Монітори"
#define TR_AND_SWITCH "ТА свічі"
#define TR_SF "SF"
#define TR_GF "GF"
#define TR_ANADIAGS_CALIB "Calibrated analogs"
#define TR_ANADIAGS_FILTRAWDEV "Filtered raw analogs with deviation"
#define TR_ANADIAGS_UNFILTRAW "Unfiltered raw analogs"
#define TR_ANADIAGS_MINMAX "Min., max. and range"
#define TR_ANADIAGS_MOVE "Move analogs to their extremes!"
#define TR_SPEAKER INDENT "Speaker"
#define TR_BUZZER INDENT "Buzzer"
#define TR_BYTES "bytes"
#define TR_MODULE_BIND BUTTON(TR("Bnd", "Bind"))
#define TR_POWERMETER_ATTN_NEEDED "Attenuator needed"
#define TR_PXX2_SELECT_RX "Вибрати RX"
#define TR_PXX2_DEFAULT "<по-замовч.>"
#define TR_BT_SELECT_DEVICE "Select device"
#define TR_DISCOVER "Discover"
#define TR_BUTTON_INIT BUTTON("Init")
#define TR_WAITING "Очікування..."
#define TR_RECEIVER_DELETE "Видалити приймач?"
#define TR_RECEIVER_RESET "Скинути приймач?"
#define TR_SHARE "Поділитись"
#define TR_BIND "Прив'язати"
#define TR_REGISTER TR("Зареєструвати", "Зареєструвати")
#define TR_MODULE_RANGE BUTTON(TR("Діапазон", "Діапазон"))
#define TR_RANGE_TEST "Тест діапазону"
#define TR_RECEIVER_OPTIONS TR("REC. OPTIONS", "RECEIVER OPTIONS")
#define TR_RESET_BTN BUTTON("Скинути")
#define TR_DEBUG "Відлагодження"
#define TR_KEYS_BTN BUTTON("Кнопки")
#define TR_ANALOGS_BTN BUTTON(TR("Аналог", "Аналоги"))
#define TR_FS_BTN BUTTON(TR("Спец. переключ.", TR_FUNCTION_SWITCHES))
#define TR_TOUCH_NOTFOUND "Сенсорне обладнання не знайдено"
#define TR_TOUCH_EXIT "Доторкніться екрану щоб вийти"
#define TR_SET BUTTON("Встановити")
#define TR_TRAINER "Трейнер"
#define TR_CHANS "Канали"
#define TR_ANTENNAPROBLEM CENTER "TX antenna problem!"
#define TR_MODELIDUSED "ID використовується в:"
#define TR_MODELIDUNIQUE "ID унікальне"
#define TR_MODULE "Модуль"
#define TR_RX_NAME "Rx Назва"
#define TR_TELEMETRY_TYPE TR("Тип", "Тип Телеметрії")
#define TR_TELEMETRY_SENSORS "Сенсори"
#define TR_VALUE "Значення"
#define TR_PERIOD "Період"
#define TR_INTERVAL "Інтервал"
#define TR_REPEAT "Повтор"
#define TR_ENABLE "Включити"
#define TR_DISABLE "Відключити"
#define TR_TOPLCDTIMER "Верхній LCD таймер"
#define TR_UNIT "Розмірність"
#define TR_TELEMETRY_NEWSENSOR INDENT "Додати новий"
#define TR_CHANNELRANGE TR(INDENT "Діап. Каналу", INDENT "Діапазон Каналу")
#define TR_ANTENNACONFIRM1 "ЗОВН. АНТЕНА"
#if defined(PCBX12S)
#define TR_ANTENNA_MODES "ВНУТР", "Запит", "На модель", "ВНУТР + ЗОВН"
#else
#define TR_ANTENNA_MODES "ВНУТР", "Запит", "На модель", "ЗОВН"
#endif
#define TR_USE_INTERNAL_ANTENNA \
  TR("Використ. внутр. антену", "Використання внутрішньої антени")
#define TR_USE_EXTERNAL_ANTENNA \
  TR("Використ. зовн. антену", "Використання зовнішньої антени")
#define TR_ANTENNACONFIRM2 \
  TR("Перевірте антену", "Перевірте що антена встановлена!")
#define TR_MODULE_PROTOCOL_FLEX_WARN_LINE1 "Requires FLEX non"
#define TR_MODULE_PROTOCOL_FCC_WARN_LINE1 "Requires FCC"
#define TR_MODULE_PROTOCOL_EU_WARN_LINE1 "Requires EU"
#define TR_MODULE_PROTOCOL_WARN_LINE2 "сертифікована прошивка"
#define TR_LOWALARM INDENT "Low сигналізація"
#define TR_CRITICALALARM INDENT "Critical сигналізація"
#define TR_DISABLE_ALARM               \
  TR(INDENT "Відключити сигналізацію", \
     INDENT "Відключити сигналізацію телеметрії")
#define TR_POPUP "Спливаюче вікно"
#define TR_MIN "Мін"
#define TR_MAX "Макс"
#define TR_CURVE_PRESET "Пресет..."
#define TR_PRESET "Пресет"
#define TR_MIRROR "Дзеркало"
#define TR_CLEAR "Очистити"
#define TR_RESET "Скинути"
#define TR_RESET_SUBMENU "Скинути..."
#define TR_COUNT "Кіл-ть"
#define TR_PT "pt"
#define TR_PTS "pts"
#define TR_SMOOTH "Smooth"
#define TR_COPY_STICKS_TO_OFS \
  TR("Скопіюв. stick->subtrim", "Скопіювати stick->subtrim")
#define TR_COPY_MIN_MAX_TO_OUTPUTS \
  TR("Скопюв. мін/макс у всі", "Скопіювати мін/макс/центр у всі виходи")
#define TR_COPY_TRIMS_TO_OFS TR("Cpy trim->subtrim", "Copy trims to subtrim")
#define TR_INCDEC "Збільш/Зменш"
#define TR_GLOBALVAR "Глобальні змінні"
#define TR_MIXSOURCE "Джерело мікшеру"
#define TR_CONSTANT "Константа"
#define TR_PREFLIGHT_POTSLIDER_CHECK "Викл", "Вкл", "АВТО"
#define TR_PREFLIGHT "Перевірки перед стартом"
#define TR_CHECKLIST TR(INDENT "Checklist", INDENT "Показати checklist")
#define TR_CHECKLIST_INTERACTIVE                         \
  TR3(INDENT "C-Interact", INDENT "Interact. checklist", \
      INDENT "Interactive checklist")
#define TR_AUX_SERIAL_MODE "Serial port"
#define TR_AUX2_SERIAL_MODE "Serial port 2"
#define TR_AUX_SERIAL_PORT_POWER "Port power"
#define TR_SCRIPT "Script"
#define TR_INPUTS "Входи"
#define TR_OUTPUTS "Outputs"
#define STR_EEBACKUP "EEPROM backup"
#define STR_FACTORYRESET "Factory reset"
#define TR_CONFIRMRESET TR("Erase ALL", "Erase ALL models and settings?")
#define TR_TOO_MANY_LUA_SCRIPTS "Too many Lua scripts!"
#define TR_SPORT_UPDATE_POWER_MODE "SP Power"
#define TR_SPORT_UPDATE_POWER_MODES "AUTO", "Вкл"
#define TR_NO_TELEMETRY_SCREENS "No Telemetry Screens"
#define TR_TOUCH_PANEL "Touch panel:"
#define TR_FILE_SIZE "File size"
#define TR_FILE_OPEN "Open anyway?"
#define TR_TIMER_MODES                                                \
  {                                                                   \
    TR_OFFON, TR_START, TR_THROTTLE_LABEL, TR_THROTTLE_PERCENT_LABEL, \
        TR_THROTTLE_START                                             \
  }

// Horus and Taranis column headers
#define TR_PHASES_HEADERS_NAME "Name"
#define TR_PHASES_HEADERS_SW "Switch"
#define TR_PHASES_HEADERS_RUD_TRIM "Rudder Trim"
#define TR_PHASES_HEADERS_ELE_TRIM "Elevator Trim"
#define TR_PHASES_HEADERS_THT_TRIM "Throttle Trim"
#define TR_PHASES_HEADERS_AIL_TRIM "Aileron Trim"
#define TR_PHASES_HEADERS_CH5_TRIM "Trim 5"
#define TR_PHASES_HEADERS_CH6_TRIM "Trim 6"
#define TR_PHASES_HEADERS_FAD_IN "Fade In"
#define TR_PHASES_HEADERS_FAD_OUT "Fade Out"

#define TR_LIMITS_HEADERS_NAME "Name"
#define TR_LIMITS_HEADERS_SUBTRIM "Subtrim"
#define TR_LIMITS_HEADERS_MIN "Min"
#define TR_LIMITS_HEADERS_MAX "Max"
#define TR_LIMITS_HEADERS_DIRECTION "Direction"
#define TR_LIMITS_HEADERS_CURVE "Curve"
#define TR_LIMITS_HEADERS_PPMCENTER "PPM Center"
#define TR_LIMITS_HEADERS_SUBTRIMMODE "Subtrim mode"
#define TR_INVERTED "Inverted"

#define TR_LSW_DESCRIPTIONS                                           \
  {                                                                   \
    "Comparison type or function", "First variable",                  \
        "Second variable or constant", "Second variable or constant", \
        "Additional condition for line to be enabled",                \
        "Minimum ON duration of the logical switch",                  \
        "Minimum TRUE duration for the switch to become ON"           \
  }

#if defined(COLORLCD)
// Horus layouts and widgets
#define TR_FIRST_CHANNEL "Перший канал"
#define TR_FILL_BACKGROUND "Fill background?"
#define TR_BG_COLOR "BG Color"
#define TR_SLIDERS_TRIMS "Повзунки+Trims"
#define TR_SLIDERS "Повзунки"
#define TR_FLIGHT_MODE "Режим польоту"
#define TR_INVALID_FILE "Некоректний файл"
#define TR_TIMER_SOURCE "Джерело таймера"
#define TR_SIZE "Розмір"
#define TR_SHADOW "Тінь"
#define TR_ALIGNMENT "Вирів."
#define TR_ALIGN_LABEL "Вирів. назви"
#define TR_ALIGN_VALUE "Вирів. значення"
#define TR_ALIGN_OPTS                \
  {                                  \
    "Зліва", "Центр", "Справа" \
  }
#define TR_TEXT "Текст"
#define TR_COLOR "Колір"
#define TR_MAIN_VIEW_X "Головний вид XX"
#define TR_PANEL1_BACKGROUND "Panel1 background"
#define TR_PANEL2_BACKGROUND "Panel2 background"
#define TR_WIDGET_GAUGE "Вимірювання"
#define TR_WIDGET_MODELBMP "Інформація моделі"
#define TR_WIDGET_OUTPUTS "Виводи"
#define TR_WIDGET_TEXT "Текст"
#define TR_WIDGET_TIMER "Таймер"
#define TR_WIDGET_VALUE "Значення"
#endif

// Bootloader common - Ascii only
#define TR_BL_USB_CONNECTED "USB Підключено"
#define TR_BL_USB_PLUGIN "Або підключіть USB кабель"
#define TR_BL_USB_MASS_STORE "Для накопичувача"
#define TR_BL_USB_PLUGIN_MASS_STORE "Або підключіть USB кабель до накопичувача"
#define TR_BL_WRITE_FW "Запис Прошивки"
#define TR_BL_FORK "Форк:"
#define TR_BL_VERSION "Версія:"
#define TR_BL_RADIO "Пульт:"
#define TR_BL_EXIT "Вихід"
#define TR_BL_DIR_MISSING " Папка відсутня"
#define TR_BL_DIR_EMPTY " Папка пуста"
#define TR_BL_WRITING_FW "Очікування..."
#define TR_BL_WRITING_COMPL "Очікування завершено"

#if LCD_W >= 480
#define TR_BL_INVALID_FIRMWARE "Not a valid firmware file"
#elif LCD_W >= 212
#define TR_BL_OR_PLUGIN_USB_CABLE TR_BL_USB_PLUGIN_MASS_STORE
#define TR_BL_HOLD_ENTER_TO_START "\012Hold [ENT] to start writing"
#define TR_BL_INVALID_FIRMWARE "\011Not a valid firmware file!        "
#define TR_BL_INVALID_EEPROM "\011Not a valid EEPROM file!          "
#else
#define TR_BL_OR_PLUGIN_USB_CABLE TR_BL_USB_PLUGIN
#define TR_BL_HOLD_ENTER_TO_START "\006Hold [ENT] to start"
#define TR_BL_INVALID_FIRMWARE "\004Not a valid firmware!        "
#define TR_BL_INVALID_EEPROM "\004Not a valid EEPROM!          "
#endif

#if defined(PCBTARANIS)
// Bootloader Taranis specific - Ascii only
#define TR_BL_RESTORE_EEPROM "Відновити EEPROM"
#if defined(RADIO_COMMANDO8)
#define TR_BL_POWER_KEY "Натисніть кнопку включення."
#define TR_BL_FLASH_EXIT "Вихід з режиму прошивки."
#endif
#elif defined(PCBHORUS)
// Bootloader Horus specific - Ascii only
#define TR_BL_SELECT_KEY "[ENT] щоб вибрати файл"
#define TR_BL_FLASH_KEY "Затисніть [ENT] щоб прошити"
#define TR_BL_EXIT_KEY "[RTN] щоб вийти"
#elif defined(PCBNV14)
// Bootloader NV14 specific - Ascii only
#define TR_BL_RF_USB_ACCESS "Доступ до RF USB"
#define TR_BL_CURRENT_FW "Поточна Прошивка:"
#define TR_BL_SELECT_KEY "[R TRIM] щоб вибрати файл"
#define TR_BL_FLASH_KEY "Затисніть [R TRIM] щоб прошити"
#define TR_BL_EXIT_KEY " [L TRIM] щоб вийти"
#elif defined(PCBPL18)
// Bootloader PL18 specific - Ascii only
#define TR_BL_RF_USB_ACCESS "Доступ до RF USB"
#define TR_BL_ERASE_INT_FLASH "Очистити внутрішній флеш-накопичувач"
#define TR_BL_ERASE_FLASH "Очистити флеш-накопичувач"
#define TR_BL_ERASE_FLASH_MSG "Це може зайняти до 200с"
#define TR_BL_SELECT_KEY " [TR4 Dn] щоб вибрати файл"
#define TR_BL_FLASH_KEY " Затисніть [TR4 Dn] щоб прошити"
#define TR_BL_ERASE_KEY " Затисніть [TR4 Dn] щоб видалити"
#define TR_BL_EXIT_KEY " [TR4 Up] щоб вийти"
#endif

// About screen
#define TR_ABOUTUS TR(" ІНФОРМАЦІЯ ", "ІНФОРМАЦІЯ")

#define TR_CHR_HOUR 'г'
#define TR_CHR_INPUT 'I'  // Values between A-I will work

#define TR_BEEP_VOLUME "Гучність сигналу"
#define TR_WAV_VOLUME "Гічність Wav"
#define TR_BG_VOLUME TR("Фон. гучність", "Гучність фонового звуку")

#define TR_TOP_BAR "Top bar"
#define TR_FLASH_ERASE "Очистити флеш-пам'ять..."
#define TR_FLASH_WRITE "Записати флеш-пам'ять..."
#define TR_OTA_UPDATE "Оновлення OTA..."
#define TR_MODULE_RESET "Скинути Модуль..."
#define TR_UNKNOWN_RX "Невідомий RX"
#define TR_UNSUPPORTED_RX "Непідтримуваний RX"
#define TR_OTA_UPDATE_ERROR "Помилка оновлення OTA"
#define TR_DEVICE_RESET "Скинути пристрій..."
#define TR_ALTITUDE INDENT "Висота"
#define TR_SCALE "Scale"
#define TR_VIEW_CHANNELS "Подивитись Канали"
#define TR_VIEW_NOTES "Подивитись Замітки"
#define TR_MODEL_SELECT "Вибір Моделі"
#define TR_ID "ID"
#define TR_PRECISION "Точність"
#define TR_RATIO "Співвідношення"
#define TR_FORMULA "Формуля"
#define TR_CELLINDEX "Індекс комірки"
#define TR_LOGS "Журнали"
#define TR_OPTIONS "Опції"
#define TR_FIRMWARE_OPTIONS "Опції Прошивки"

#define TR_ALTSENSOR "Alt сенсор"
#define TR_CELLSENSOR "Cell сенсор"
#define TR_GPSSENSOR "GPS сенсор"
#define TR_CURRENTSENSOR "Сенсор"
#define TR_AUTOOFFSET "Автоматичний зсув"
#define TR_ONLYPOSITIVE "Додатні"
#define TR_FILTER "Фільтр"
#define TR_TELEMETRYFULL TR("Всі слоти повні!", "Всі слоти телеметрії повні!")
#define TR_INVERTED_SERIAL INDENT "Invert"
#define TR_IGNORE_INSTANCE TR(INDENT "No inst.", INDENT "Ignore instances")
#define TR_SHOW_INSTANCE_ID "Show instance ID"
#define TR_DISCOVER_SENSORS "Виявити новий"
#define TR_STOP_DISCOVER_SENSORS "Стоп"
#define TR_DELETE_ALL_SENSORS "Видалити всі"
#define TR_CONFIRMDELETE "Дійсно" LCDW_128_480_LINEBREAK " видалити всі?"
#define TR_SELECT_WIDGET "Вибрати віджет"
#define TR_WIDGET_FULLSCREEN "Повноекранний"
#define TR_REMOVE_WIDGET "Видалити віджет"
#define TR_WIDGET_SETTINGS "Налаштування віджету"
#define TR_REMOVE_SCREEN "Видалити екран"
#define TR_SETUP_WIDGETS "Налаштування віджетів"
#define TR_USER_INTERFACE "Інтерфейс користувача"
#define TR_THEME "Тема"
#define TR_SETUP "Налаштувати"
#define TR_LAYOUT "Компонування"
#define TR_ADD_MAIN_VIEW "Додати на голов. екран"
#define TR_BACKGROUND_COLOR "Фоновий колір"
#define TR_MAIN_COLOR "Головний колір"
#define TR_BAR2_COLOR "Колір вторинної панелі"
#define TR_BAR1_COLOR "Колір головної панелі"
#define TR_TEXT_COLOR "Колір тексту"
#define TR_TEXT_VIEWER "Колір перегляду"
#define TR_MENU_INPUTS STR_CHAR_INPUT "Входи"
#define TR_MENU_LUA STR_CHAR_LUA "Lua скрипти"
#define TR_MENU_STICKS STR_CHAR_STICK "Осі"
#define TR_MENU_POTS STR_CHAR_POT "Потенціометри"
#define TR_MENU_MIN STR_CHAR_FUNCTION "МІН"
#define TR_MENU_MAX STR_CHAR_FUNCTION "МАКС"
#define TR_MENU_HELI STR_CHAR_CYC "Cyclic"
#define TR_MENU_TRIMS STR_CHAR_TRIM "Тримери"
#define TR_MENU_SWITCHES STR_CHAR_SWITCH "Переключателі"
#define TR_MENU_LOGICAL_SWITCHES STR_CHAR_SWITCH "Логічні переключателі"
#define TR_MENU_TRAINER STR_CHAR_TRAINER "Трейнер"
#define TR_MENU_CHANNELS STR_CHAR_CHANNEL "Канали"
#define TR_MENU_GVARS STR_CHAR_SLIDER "GVars"
#define TR_MENU_TELEMETRY STR_CHAR_TELEMETRY "Телеметрія"
#define TR_MENU_DISPLAY "ДИСПЛЕЙ"
#define TR_MENU_OTHER "Інше"
#define TR_MENU_INVERT "Інвертувати"
#define TR_AUDIO_MUTE TR("Відкл. звук", "Відключити звук")
#define TR_JITTER_FILTER "ADC filter"
#define TR_DEAD_ZONE "Мертва зона"
#define TR_RTC_CHECK TR("Переівір RTC", "Перевір RTC напругу")
#define TR_AUTH_FAILURE "Помилка аунтентиф."
#define TR_RACING_MODE "Режим гонки"

#define TR_USE_THEME_COLOR "Використ. колір теми"

#define TR_ADD_ALL_TRIMS_TO_SUBTRIMS "Додати всі Тріми до Сабтрімів"
#if LCD_W > LCD_H
#define TR_OPEN_CHANNEL_MONITORS "Відкрити Монітор Каналів"
#else
#define TR_OPEN_CHANNEL_MONITORS "Відкр. мон. каналів"
#endif
#define TR_DUPLICATE "Копіювати"
#define TR_ACTIVATE "Активувати"
#define TR_RED "Червоний"
#define TR_BLUE "Синій"
#define TR_GREEN "Зелений"
#define TR_COLOR_PICKER "Вибрати Колір"
#define TR_EDIT_THEME_DETAILS "Змінити деталі теми"
#define TR_THEME_COLOR_DEFAULT "ПО-ЗАМОВЧУВАННЮ"
#define TR_THEME_COLOR_PRIMARY1 "ОСНОВНИЙ1"
#define TR_THEME_COLOR_PRIMARY2 "ОСНОВНИЙ2"
#define TR_THEME_COLOR_PRIMARY3 "ОСНОВНИЙ3"
#define TR_THEME_COLOR_SECONDARY1 "ВТОРИННИЙ1"
#define TR_THEME_COLOR_SECONDARY2 "ВТОРИННИЙ2"
#define TR_THEME_COLOR_SECONDARY3 "ВТОРИННИЙ3"
#define TR_THEME_COLOR_FOCUS "ФОКУС"
#define TR_THEME_COLOR_EDIT "ЗМІНИТИ"
#define TR_THEME_COLOR_ACTIVE "ВКЛЮЧЕНО"
#define TR_THEME_COLOR_WARNING "УВАГА"
#define TR_THEME_COLOR_DISABLED "ВІДКЛЮЧЕНО"
#define TR_THEME_COLOR_CUSTOM "CUSTOM"
#define TR_THEME_CHECKBOX "Checkbox"
#define TR_THEME_ACTIVE "Активний"
#define TR_THEME_REGULAR "Звичайний"
#define TR_THEME_WARNING "Увага"
#define TR_THEME_DISABLED "Відключено"
#define TR_THEME_EDIT "Змінити"
#define TR_THEME_FOCUS "Фокус"
#define TR_AUTHOR "Автор"
#define TR_DESCRIPTION "Опис"
#define TR_SAVE "Зберігти"
#define TR_CANCEL "Відмінити"
#define TR_EDIT_THEME "Змінити тему"
#define TR_DETAILS "Деталі"
#define TR_THEME_EDITOR "Теми"

// Main menu
#define TR_MAIN_MENU_SELECT_MODEL "Вибір\nМоделі"
#define TR_MAIN_MENU_MANAGE_MODELS "Керування\nМоделями"
#define TR_MAIN_MENU_MODEL_NOTES "Замітки\nМоделі"
#define TR_MAIN_MENU_CHANNEL_MONITOR "Монітор\nКаналів"
#define TR_MAIN_MENU_MODEL_SETTINGS "Налаштування\nМоделей"
#define TR_MAIN_MENU_RADIO_SETTINGS "Налаштування\nРадіо"
#define TR_MAIN_MENU_SCREEN_SETTINGS "Налаштування\nЕкрану"
#define TR_MAIN_MENU_RESET_TELEMETRY "Скинути\nТелеметрію"
#define TR_MAIN_MENU_STATISTICS "Статистика"
#define TR_MAIN_MENU_ABOUT_EDGETX "Про\nEdgeTX"
// End Main menu

// Voice in native language
#define TR_VOICE_ENGLISH "Англійська"
#define TR_VOICE_CHINESE "Китайська"
#define TR_VOICE_CZECH "Чешська"
#define TR_VOICE_DANISH "Датська"
#define TR_VOICE_DEUTSCH "Німецька"
#define TR_VOICE_DUTCH "Голландська"
#define TR_VOICE_ESPANOL "Іспанська"
#define TR_VOICE_FRANCAIS "Французьска"
#define TR_VOICE_HUNGARIAN "Венгерьска"
#define TR_VOICE_ITALIANO "Італійська"
#define TR_VOICE_POLISH "Польска"
#define TR_VOICE_PORTUGUES "Португальска"
#define TR_VOICE_RUSSIAN "Російська"
#define TR_VOICE_SLOVAK "Словацька"
#define TR_VOICE_SWEDISH "Шведська"
#define TR_VOICE_TAIWANESE "Тайваньска"
#define TR_VOICE_JAPANESE "Японська"
#define TR_VOICE_HEBREW "Іврит"
#define TR_VOICE_UKRAINIAN "Українська"

#define TR_USBJOYSTICK_LABEL "USB джойстик"
#define TR_USBJOYSTICK_EXTMODE "Режим"
#define TR_VUSBJOYSTICK_EXTMODE "Classic", "Advanced"
#define TR_USBJOYSTICK_SETTINGS "Налаштування каналів"
#define TR_USBJOYSTICK_IF_MODE TR("Режим інтерф.", "Режим інтерфейсу")
#define TR_VUSBJOYSTICK_IF_MODE "Джойстик", "Геймпад", "MultiAxis"
#define TR_USBJOYSTICK_CH_MODE "Режим"
#define TR_VUSBJOYSTICK_CH_MODE "None", "Кнопка", "Вісі", "Сим"
#define TR_VUSBJOYSTICK_CH_MODE_S "-", "B", "A", "S"
#define TR_USBJOYSTICK_CH_BTNMODE "Режим Кнопки"
#define TR_VUSBJOYSTICK_CH_BTNMODE \
  "Normal", "Pulse", "SWEmu", "Delta", "Companion"
#define TR_VUSBJOYSTICK_CH_BTNMODE_S                               \
  TR("Norm", "Normal"), TR("Puls", "Pulse"), TR("SWEm", "SWEmul"), \
      TR("Delt", "Delta"), TR("CPN", "Companion")
#define TR_USBJOYSTICK_CH_SWPOS "Positions"
#define TR_VUSBJOYSTICK_CH_SWPOS \
  "Push", "2POS", "3POS", "4POS", "5POS", "6POS", "7POS", "8POS"
#define TR_USBJOYSTICK_CH_AXIS "Вісі"
#define TR_VUSBJOYSTICK_CH_AXIS \
  "X", "Y", "Z", "rotX", "rotY", "rotZ", "Slider", "Dial", "Wheel"
#define TR_USBJOYSTICK_CH_SIM "Сим вісі"
#define TR_VUSBJOYSTICK_CH_SIM "Ail", "Ele", "Rud", "Thr"
#define TR_USBJOYSTICK_CH_INVERSION "Інверсія"
#define TR_USBJOYSTICK_CH_BTNNUM "Кнопка #"
#define TR_USBJOYSTICK_BTN_COLLISION "!Кнопка # вже визначена!"
#define TR_USBJOYSTICK_AXIS_COLLISION "!Колізія вісей!"
#define TR_USBJOYSTICK_CIRC_COUTOUT TR("Circ. cut", "Circular cutout")
#define TR_VUSBJOYSTICK_CIRC_COUTOUT "None", "X-Y, Z-rX", "X-Y, rX-rY"
#define TR_USBJOYSTICK_APPLY_CHANGES "Застосувати зміни"

#define TR_DIGITAL_SERVO "Servo333HZ"
#define TR_ANALOG_SERVO "Servo 50HZ"
#define TR_SIGNAL_OUTPUT "Вихідний сигнал"
#define TR_SERIAL_BUS "Послідовна шина"
#define TR_SYNC "Синхр."

#define TR_ENABLED_FEATURES "Активовані функції"
#define TR_RADIO_MENU_TABS "Вкладки меню пульта"
#define TR_MODEL_MENU_TABS "Вкладки меню моделі"

#define TR_SELECT_MENU_ALL "Все"
#define TR_SELECT_MENU_CLR "Очистити"
#define TR_SELECT_MENU_INV "Інвертувати"

#define TR_SORT_ORDERS \
  "Назва A-Z", "Назва Z-A", "Найменш викор.", "Найбільш викор."
#define TR_SORT_MODELS_BY "Сортувати моделі за"
#define TR_CREATE_NEW "Створити"
