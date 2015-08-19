/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: /home/justinc/poky/build/tmp/sysroots/x86_64-linux/usr/bin/gperf -L ANSI-C -t --ignore-case -N lookup_key -H hash_key_name -p -C  */
/* Computed positions: -k'5-8,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

struct key { const char* name; unsigned short id; };

#define TOTAL_KEYWORDS 397
#define MIN_WORD_LENGTH 5
#define MAX_WORD_LENGTH 20
#define MIN_HASH_VALUE 5
#define MAX_HASH_VALUE 1667
/* maximum key range = 1663, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_STRCMP
#define GPERF_CASE_STRCMP 1
static int
gperf_case_strcmp (register const char *s1, register const char *s2)
{
  for (;;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 != 0 && c1 == c2)
        continue;
      return (int)c1 - (int)c2;
    }
}
#endif

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash_key_name (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,  305,   50,
       225,  285,  295,  455,  425,  385,  230,  205, 1668, 1668,
      1668, 1668, 1668, 1668, 1668,   10,  265,   25,  165,    5,
       300,  320,  315,  125,   70,  240,  195,   30,  100,   35,
        15,   60,   65,   20,    0,  270,  365,  415,   55,  355,
        85, 1668, 1668, 1668, 1668,  170, 1668,   10,  265,   25,
       165,    5,  300,  320,  315,  125,   70,  240,  195,   30,
       100,   35,   15,   60,   65,   20,    0,  270,  365,  415,
        55,  355,   85, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668, 1668,
      1668, 1668, 1668, 1668, 1668, 1668
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct key *
lookup_key (register const char *str, register unsigned int len)
{
  static const struct key wordlist[] =
    {
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_T", KEY_T},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_E", KEY_E},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_A", KEY_A},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_P", KEY_P},
      {(char*)0},
      {"KEY_SAT", KEY_SAT},
      {(char*)0}, {(char*)0},
      {"KEY_ATTENDANT_TOGGLE", KEY_ATTENDANT_TOGGLE},
      {(char*)0}, {(char*)0},
      {"KEY_TAPE", KEY_TAPE},
      {(char*)0},
      {"KEY_S", KEY_S},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_C", KEY_C},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_PASTE", KEY_PASTE},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_M", KEY_M},
      {(char*)0}, {(char*)0},
      {"KEY_TEXT", KEY_TEXT},
      {(char*)0}, {(char*)0},
      {"KEY_PC", KEY_PC},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_O", KEY_O},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"KEY_ESC", KEY_ESC},
      {(char*)0},
      {"KEY_SPACE", KEY_SPACE},
      {"KEY_CAMERA_LEFT", KEY_CAMERA_LEFT},
      {"KEY_CAMERA_RIGHT", KEY_CAMERA_RIGHT},
      {(char*)0},
      {"KEY_CAMERA_ZOOMOUT", KEY_CAMERA_ZOOMOUT},
      {(char*)0},
      {"KEY_CAMERA", KEY_CAMERA},
      {(char*)0}, {(char*)0},
      {"KEY_STOP", KEY_STOP},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_CAMERA_UP", KEY_CAMERA_UP},
      {"KEY_APOSTROPHE", KEY_APOSTROPHE},
      {(char*)0},
      {"KEY_RESTART", KEY_RESTART},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_1", KEY_1},
      {"KEY_CAMERA_FOCUS", KEY_CAMERA_FOCUS},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_X", KEY_X},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_SPREADSHEET", KEY_SPREADSHEET},
      {"KEY_COMPOSE", KEY_COMPOSE},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_Q", KEY_Q},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_ATTENDANT_ON", KEY_ATTENDANT_ON},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_R", KEY_R},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_COMMA", KEY_COMMA},
      {(char*)0},
      {"KEY_RO", KEY_RO},
      {(char*)0},
      {"KEY_MEMO", KEY_MEMO},
      {"KEY_SPORT", KEY_SPORT},
      {"KEY_J", KEY_J},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_MESSENGER", KEY_MESSENGER},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_PROPS", KEY_PROPS},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_NEXT", KEY_NEXT},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_SCROLLUP", KEY_SCROLLUP},
      {"KEY_TIME", KEY_TIME},
      {"KEY_MACRO", KEY_MACRO},
      {"KEY_Z", KEY_Z},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"KEY_COMPUTER", KEY_COMPUTER},
      {(char*)0},
      {"KEY_ENTER", KEY_ENTER},
      {"KEY_CAMERA_DOWN", KEY_CAMERA_DOWN},
      {(char*)0},
      {"KEY_CAMERA_ZOOMIN", KEY_CAMERA_ZOOMIN},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_EXIT", KEY_EXIT},
      {(char*)0}, {(char*)0},
      {"KEY_ZOOMOUT", KEY_ZOOMOUT},
      {(char*)0},
      {"KEY_ZOOMRESET", KEY_ZOOMRESET},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_DATABASE", KEY_DATABASE},
      {(char*)0}, {(char*)0},
      {"KEY_N", KEY_N},
      {(char*)0},
      {"KEY_DOT", KEY_DOT},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"KEY_TEEN", KEY_TEEN},
      {(char*)0}, {(char*)0},
      {"KEY_PRESENTATION", KEY_PRESENTATION},
      {"KEY_ISO", KEY_ISO},
      {"KEY_ZOOM", KEY_ZOOM},
      {(char*)0},
      {"KEY_SCREEN", KEY_SCREEN},
      {"KEY_MICMUTE", KEY_MICMUTE},
      {"KEY_ALTERASE", KEY_ALTERASE},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_LAST", KEY_LAST},
      {(char*)0},
      {"KEY_SELECT", KEY_SELECT},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_STOPCD", KEY_STOPCD},
      {(char*)0}, {(char*)0},
      {"KEY_MODE", KEY_MODE},
      {"KEY_SLEEP", KEY_SLEEP},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_I", KEY_I},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_SCROLLDOWN", KEY_SCROLLDOWN},
      {"KEY_INSERT", KEY_INSERT},
      {(char*)0}, {(char*)0},
      {"KEY_OPEN", KEY_OPEN},
      {"KEY_SCALE", KEY_SCALE},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"KEY_CONNECT", KEY_CONNECT},
      {"KEY_RESERVED", KEY_RESERVED},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"KEY_MSDOS", KEY_MSDOS},
      {(char*)0},
      {"KEY_EJECTCD", KEY_EJECTCD},
      {"KEY_KATAKANA", KEY_KATAKANA},
      {(char*)0}, {(char*)0},
      {"KEY_OPTION", KEY_OPTION},
      {"KEY_EJECTCLOSECD", KEY_EJECTCLOSECD},
      {(char*)0},
      {"KEY_CALC", KEY_CALC},
      {"KEY_CLOSE", KEY_CLOSE},
      {"KEY_KATAKANAHIRAGANA", KEY_KATAKANAHIRAGANA},
      {(char*)0}, {(char*)0},
      {"KEY_SEMICOLON", KEY_SEMICOLON},
      {(char*)0},
      {"KEY_ZOOMIN", KEY_ZOOMIN},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"KEY_CUT", KEY_CUT},
      {"KEY_EDIT", KEY_EDIT},
      {(char*)0},
      {"KEY_RECORD", KEY_RECORD},
      {"KEY_UP", KEY_UP},
      {"KEY_SENDFILE", KEY_SENDFILE},
      {(char*)0},
      {"KEY_CLEAR", KEY_CLEAR},
      {(char*)0}, {(char*)0},
      {"KEY_CALENDAR", KEY_CALENDAR},
      {"KEY_REDO", KEY_REDO},
      {"KEY_PRINT", KEY_PRINT},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_MUTE", KEY_MUTE},
      {"KEY_SETUP", KEY_SETUP},
      {(char*)0}, {(char*)0},
      {"KEY_CAPSLOCK", KEY_CAPSLOCK},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_BASSBOOST", KEY_BASSBOOST},
      {"KEY_PAUSE", KEY_PAUSE},
      {(char*)0}, {(char*)0},
      {"KEY_ATTENDANT_OFF", KEY_ATTENDANT_OFF},
      {(char*)0},
      {"KEY_TITLE", KEY_TITLE},
      {"KEY_D", KEY_D},
      {"KEY_KPCOMMA", KEY_KPCOMMA},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_MEDIA_REPEAT", KEY_MEDIA_REPEAT},
      {(char*)0}, {(char*)0},
      {"KEY_MEDIA", KEY_MEDIA},
      {(char*)0}, {(char*)0},
      {"KEY_DISPLAYTOGGLE", KEY_DISPLAYTOGGLE},
      {"KEY_LIST", KEY_LIST},
      {(char*)0}, {(char*)0},
      {"KEY_HP", KEY_HP},
      {(char*)0}, {(char*)0},
      {"KEY_TOUCHPAD_TOGGLE", KEY_TOUCHPAD_TOGGLE},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_CHAT", KEY_CHAT},
      {(char*)0}, {(char*)0},
      {"KEY_CD", KEY_CD},
      {"KEY_KP1", KEY_KP1},
      {"KEY_KPJPCOMMA", KEY_KPJPCOMMA},
      {(char*)0},
      {"KEY_CANCEL", KEY_CANCEL},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_SCREENLOCK", KEY_SCREENLOCK},
      {"KEY_EDITOR", KEY_EDITOR},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_EMAIL", KEY_EMAIL},
      {"KEY_PAGEUP", KEY_PAGEUP},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"KEY_MHP", KEY_MHP},
      {(char*)0}, {(char*)0},
      {"KEY_DELETE", KEY_DELETE},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_DELETEFILE", KEY_DELETEFILE},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_GAMES", KEY_GAMES},
      {"KEY_L", KEY_L},
      {(char*)0},
      {"KEY_AUX", KEY_AUX},
      {"KEY_HOME", KEY_HOME},
      {"KEY_SCROLLLOCK", KEY_SCROLLLOCK},
      {(char*)0}, {(char*)0},
      {"KEY_HOMEPAGE", KEY_HOMEPAGE},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_F1", KEY_F1},
      {"KEY_RED", KEY_RED},
      {"KEY_SHOP", KEY_SHOP},
      {"KEY_RADIO", KEY_RADIO},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_SAVE", KEY_SAVE},
      {"KEY_ALS_TOGGLE", KEY_ALS_TOGGLE},
      {"KEY_9", KEY_9},
      {(char*)0}, {(char*)0},
      {"KEY_EURO", KEY_EURO},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"KEY_SEARCH", KEY_SEARCH},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_ARCHIVE", KEY_ARCHIVE},
      {"KEY_INS_LINE", KEY_INS_LINE},
      {"KEY_GOTO", KEY_GOTO},
      {(char*)0}, {(char*)0},
      {"KEY_KPENTER", KEY_KPENTER},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_KPMINUS", KEY_KPMINUS},
      {"KEY_END", KEY_END},
      {(char*)0}, {(char*)0},
      {"KEY_TOUCHPAD_ON", KEY_TOUCHPAD_ON},
      {"KEY_CONTEXT_MENU", KEY_CONTEXT_MENU},
      {(char*)0},
      {"KEY_MOVE", KEY_MOVE},
      {"KEY_TUNER", KEY_TUNER},
      {(char*)0},
      {"KEY_CLOSECD", KEY_CLOSECD},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_2", KEY_2},
      {(char*)0},
      {"KEY_F11", KEY_F11},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_PAGEDOWN", KEY_PAGEDOWN},
      {"KEY_SEND", KEY_SEND},
      {"KEY_KPDOT", KEY_KPDOT},
      {"KEY_8", KEY_8},
      {(char*)0},
      {"KEY_QUESTION", KEY_QUESTION},
      {"KEY_NUMERIC_1", KEY_NUMERIC_1},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_DIRECTION", KEY_DIRECTION},
      {(char*)0}, {(char*)0},
      {"KEY_PROGRAM", KEY_PROGRAM},
      {(char*)0},
      {"KEY_CHANNELUP", KEY_CHANNELUP},
      {"KEY_PHONE", KEY_PHONE},
      {(char*)0}, {(char*)0},
      {"KEY_PREVIOUS", KEY_PREVIOUS},
      {(char*)0}, {(char*)0},
      {"KEY_K", KEY_K},
      {"KEY_NUMERIC_STAR", KEY_NUMERIC_STAR},
      {(char*)0},
      {"KEY_SAT2", KEY_SAT2},
      {"KEY_SPELLCHECK", KEY_SPELLCHECK},
      {(char*)0},
      {"KEY_PAUSECD", KEY_PAUSECD},
      {"KEY_NEXTSONG", KEY_NEXTSONG},
      {"KEY_GRAPHICSEDITOR", KEY_GRAPHICSEDITOR},
      {"KEY_PROG1", KEY_PROG1},
      {"KEY_KPPLUS", KEY_KPPLUS},
      {(char*)0}, {(char*)0},
      {"KEY_XFER", KEY_XFER},
      {(char*)0},
      {"KEY_KPPLUSMINUS", KEY_KPPLUSMINUS},
      {"KEY_SUSPEND", KEY_SUSPEND},
      {(char*)0}, {(char*)0},
      {"KEY_GREEN", KEY_GREEN},
      {(char*)0},
      {"KEY_FN", KEY_FN},
      {(char*)0},
      {"KEY_LEFT", KEY_LEFT},
      {"KEY_FRONT", KEY_FRONT},
      {"KEY_FASTFORWARD", KEY_FASTFORWARD},
      {"KEY_LEFTALT", KEY_LEFTALT},
      {(char*)0},
      {"KEY_LEFTSHIFT", KEY_LEFTSHIFT},
      {"KEY_HANJA", KEY_HANJA},
      {"KEY_IMAGES", KEY_IMAGES},
      {(char*)0},
      {"KEY_PVR", KEY_PVR},
      {"KEY_LEFTBRACE", KEY_LEFTBRACE},
      {"KEY_FIRST", KEY_FIRST},
      {(char*)0},
      {"KEY_OK", KEY_OK},
      {"KEY_LEFTMETA", KEY_LEFTMETA},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_KPEQUAL", KEY_KPEQUAL},
      {"KEY_VCR", KEY_VCR},
      {"KEY_DOCUMENTS", KEY_DOCUMENTS},
      {"KEY_SYSRQ", KEY_SYSRQ},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_B", KEY_B},
      {(char*)0},
      {"KEY_HIRAGANA", KEY_HIRAGANA},
      {(char*)0},
      {"KEY_KPASTERISK", KEY_KPASTERISK},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_POWER", KEY_POWER},
      {"KEY_U", KEY_U},
      {"KEY_AB", KEY_AB},
      {"KEY_TAB", KEY_TAB},
      {(char*)0},
      {"KEY_EQUAL", KEY_EQUAL},
      {(char*)0},
      {"KEY_FINANCE", KEY_FINANCE},
      {"KEY_DEL_LINE", KEY_DEL_LINE},
      {"KEY_HELP", KEY_HELP},
      {"KEY_MINUS", KEY_MINUS},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_BACKSPACE", KEY_BACKSPACE},
      {(char*)0}, {(char*)0},
      {"KEY_KPRIGHTPAREN", KEY_KPRIGHTPAREN},
      {(char*)0},
      {"KEY_MAIL", KEY_MAIL},
      {(char*)0},
      {"KEY_CHANNELDOWN", KEY_CHANNELDOWN},
      {"KEY_DEL_EOS", KEY_DEL_EOS},
      {"KEY_YEN", KEY_YEN},
      {"KEY_NEWS", KEY_NEWS},
      {"KEY_SLASH", KEY_SLASH},
      {"KEY_KPLEFTPAREN", KEY_KPLEFTPAREN},
      {(char*)0},
      {"KEY_SUBTITLE", KEY_SUBTITLE},
      {(char*)0},
      {"KEY_AGAIN", KEY_AGAIN},
      {"KEY_3", KEY_3},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_SWITCHVIDEOMODE", KEY_SWITCHVIDEOMODE},
      {(char*)0},
      {"KEY_FRAMEFORWARD", KEY_FRAMEFORWARD},
      {"KEY_NUMERIC_POUND", KEY_NUMERIC_POUND},
      {"KEY_FN_E", KEY_FN_E},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_PLAYPAUSE", KEY_PLAYPAUSE},
      {"KEY_BREAK", KEY_BREAK},
      {"KEY_4", KEY_4},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_SOUND", KEY_SOUND},
      {(char*)0}, {(char*)0},
      {"KEY_LINEFEED", KEY_LINEFEED},
      {"KEY_INFO", KEY_INFO},
      {(char*)0},
      {"KEY_F", KEY_F},
      {(char*)0}, {(char*)0},
      {"KEY_BOOKMARKS", KEY_BOOKMARKS},
      {(char*)0},
      {"KEY_FN_ESC", KEY_FN_ESC},
      {(char*)0}, {(char*)0},
      {"KEY_UNDO", KEY_UNDO},
      {"KEY_AUDIO", KEY_AUDIO},
      {"KEY_0", KEY_0},
      {(char*)0}, {(char*)0},
      {"KEY_FN_S", KEY_FN_S},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_MP3", KEY_MP3},
      {"KEY_NUMERIC_9", KEY_NUMERIC_9},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_TWEN", KEY_TWEN},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_F21", KEY_F21},
      {(char*)0}, {(char*)0},
      {"KEY_H", KEY_H},
      {"KEY_CYCLEWINDOWS", KEY_CYCLEWINDOWS},
      {(char*)0},
      {"KEY_FILE", KEY_FILE},
      {"KEY_ANGLE", KEY_ANGLE},
      {"KEY_DISPLAY_OFF", KEY_DISPLAY_OFF},
      {"KEY_BATTERY", KEY_BATTERY},
      {"KEY_LANGUAGE", KEY_LANGUAGE},
      {"KEY_NUMERIC_2", KEY_NUMERIC_2},
      {"KEY_REPLY", KEY_REPLY},
      {"KEY_G", KEY_G},
      {"KEY_TOUCHPAD_OFF", KEY_TOUCHPAD_OFF},
      {(char*)0},
      {"KEY_NUMERIC_8", KEY_NUMERIC_8},
      {(char*)0},
      {"KEY_PLAYER", KEY_PLAYER},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_CHANNEL", KEY_CHANNEL},
      {(char*)0},
      {"KEY_FRAMEBACK", KEY_FRAMEBACK},
      {(char*)0},
      {"KEY_ADDRESSBOOK", KEY_ADDRESSBOOK},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_DOLLAR", KEY_DOLLAR},
      {(char*)0},
      {"KEY_EPG", KEY_EPG},
      {(char*)0},
      {"KEY_PROG2", KEY_PROG2},
      {(char*)0}, {(char*)0},
      {"KEY_KP9", KEY_KP9},
      {(char*)0},
      {"KEY_VIDEO_NEXT", KEY_VIDEO_NEXT},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_FN_1", KEY_FN_1},
      {"KEY_VIDEOPHONE", KEY_VIDEOPHONE},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_MENU", KEY_MENU},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_DASHBOARD", KEY_DASHBOARD},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"KEY_WAKEUP", KEY_WAKEUP},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_NUMERIC_3", KEY_NUMERIC_3},
      {"KEY_VIDEO", KEY_VIDEO},
      {"KEY_POWER2", KEY_POWER2},
      {(char*)0},
      {"KEY_LEFTCTRL", KEY_LEFTCTRL},
      {(char*)0}, {(char*)0},
      {"KEY_VENDOR", KEY_VENDOR},
      {(char*)0},
      {"KEY_KP2", KEY_KP2},
      {"KEY_NUMERIC_4", KEY_NUMERIC_4},
      {(char*)0},
      {"KEY_Y", KEY_Y},
      {"KEY_F9", KEY_F9},
      {(char*)0},
      {"KEY_ZENKAKUHANKAKU", KEY_ZENKAKUHANKAKU},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_KP8", KEY_KP8},
      {"KEY_NUMERIC_0", KEY_NUMERIC_0},
      {(char*)0}, {(char*)0},
      {"KEY_10CHANNELSUP", KEY_10CHANNELSUP},
      {(char*)0},
      {"KEY_DIRECTORY", KEY_DIRECTORY},
      {"KEY_PROG3", KEY_PROG3},
      {(char*)0}, {(char*)0},
      {"KEY_MUHENKAN", KEY_MUHENKAN},
      {(char*)0},
      {"KEY_WPS_BUTTON", KEY_WPS_BUTTON},
      {"KEY_V", KEY_V},
      {"KEY_TV", KEY_TV},
      {(char*)0}, {(char*)0},
      {"KEY_PROG4", KEY_PROG4},
      {(char*)0},
      {"KEY_DEL_EOL", KEY_DEL_EOL},
      {(char*)0},
      {"KEY_FAVORITES", KEY_FAVORITES},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_BLUE", KEY_BLUE},
      {(char*)0},
      {"KEY_PLAYCD", KEY_PLAYCD},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_F2", KEY_F2},
      {"KEY_BRL_DOT1", KEY_BRL_DOT1},
      {"KEY_VOICEMAIL", KEY_VOICEMAIL},
      {(char*)0}, {(char*)0},
      {"KEY_REFRESH", KEY_REFRESH},
      {"KEY_WORDPROCESSOR", KEY_WORDPROCESSOR},
      {(char*)0}, {(char*)0},
      {"KEY_DIGITS", KEY_DIGITS},
      {"KEY_F8", KEY_F8},
      {"KEY_F19", KEY_F19},
      {(char*)0}, {(char*)0},
      {"KEY_HENKAN", KEY_HENKAN},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_GRAVE", KEY_GRAVE},
      {"KEY_7", KEY_7},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_REWIND", KEY_REWIND},
      {"KEY_PREVIOUSSONG", KEY_PREVIOUSSONG},
      {(char*)0},
      {"KEY_BACK", KEY_BACK},
      {(char*)0},
      {"KEY_CONFIG", KEY_CONFIG},
      {(char*)0}, {(char*)0},
      {"KEY_COPY", KEY_COPY},
      {(char*)0}, {(char*)0},
      {"KEY_KPSLASH", KEY_KPSLASH},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_BRIGHTNESS_CYCLE", KEY_BRIGHTNESS_CYCLE},
      {(char*)0}, {(char*)0},
      {"KEY_NUMERIC_7", KEY_NUMERIC_7},
      {(char*)0}, {(char*)0},
      {"KEY_BRIGHTNESSUP", KEY_BRIGHTNESSUP},
      {"KEY_F12", KEY_F12},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_10CHANNELSDOWN", KEY_10CHANNELSDOWN},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_F18", KEY_F18},
      {"KEY_KBDILLUMTOGGLE", KEY_KBDILLUMTOGGLE},
      {(char*)0}, {(char*)0},
      {"KEY_UNKNOWN", KEY_UNKNOWN},
      {"KEY_TV2", KEY_TV2},
      {"KEY_DOWN", KEY_DOWN},
      {"KEY_KBDILLUMUP", KEY_KBDILLUMUP},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_WLAN", KEY_WLAN},
      {"KEY_BRIGHTNESS_ZERO", KEY_BRIGHTNESS_ZERO},
      {(char*)0}, {(char*)0},
      {"KEY_KP3", KEY_KP3},
      {(char*)0},
      {"KEY_RIGHT", KEY_RIGHT},
      {"KEY_W", KEY_W},
      {(char*)0},
      {"KEY_RIGHTALT", KEY_RIGHTALT},
      {(char*)0},
      {"KEY_RIGHTSHIFT", KEY_RIGHTSHIFT},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_NUMERIC_6", KEY_NUMERIC_6},
      {"KEY_RIGHTBRACE", KEY_RIGHTBRACE},
      {(char*)0},
      {"KEY_NUMLOCK", KEY_NUMLOCK},
      {(char*)0},
      {"KEY_RIGHTMETA", KEY_RIGHTMETA},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_KP4", KEY_KP4},
      {(char*)0},
      {"KEY_102ND", KEY_102ND},
      {"KEY_6", KEY_6},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_FIND", KEY_FIND},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_DVD", KEY_DVD},
      {"KEY_BACKSLASH", KEY_BACKSLASH},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_KP0", KEY_KP0},
      {"KEY_NUMERIC_5", KEY_NUMERIC_5},
      {(char*)0}, {(char*)0},
      {"KEY_F3", KEY_F3},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_VOLUMEUP", KEY_VOLUMEUP},
      {"KEY_BRIGHTNESSDOWN", KEY_BRIGHTNESSDOWN},
      {(char*)0},
      {"KEY_LOGOFF", KEY_LOGOFF},
      {"KEY_F4", KEY_F4},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_FN_D", KEY_FN_D},
      {(char*)0}, {(char*)0},
      {"KEY_KBDILLUMDOWN", KEY_KBDILLUMDOWN},
      {"KEY_BRL_DOT9", KEY_BRL_DOT9},
      {"KEY_VCR2", KEY_VCR2},
      {(char*)0},
      {"KEY_5", KEY_5},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_SHUFFLE", KEY_SHUFFLE},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_F13", KEY_F13},
      {(char*)0},
      {"KEY_FN_F1", KEY_FN_F1},
      {"KEY_FN_F11", KEY_FN_F11},
      {(char*)0},
      {"KEY_BRL_DOT2", KEY_BRL_DOT2},
      {(char*)0}, {(char*)0},
      {"KEY_RFKILL", KEY_RFKILL},
      {(char*)0},
      {"KEY_BRL_DOT8", KEY_BRL_DOT8},
      {"KEY_PLAY", KEY_PLAY},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_NEW", KEY_NEW},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_F14", KEY_F14},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_HANGEUL", KEY_HANGEUL},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_F10", KEY_F10},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_LIGHTS_TOGGLE", KEY_LIGHTS_TOGGLE},
      {(char*)0},
      {"KEY_VOLUMEDOWN", KEY_VOLUMEDOWN},
      {(char*)0}, {(char*)0},
      {"KEY_F22", KEY_F22},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_FORWARD", KEY_FORWARD},
      {"KEY_BRL_DOT3", KEY_BRL_DOT3},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_BRL_DOT4", KEY_BRL_DOT4},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"KEY_BRL_DOT10", KEY_BRL_DOT10},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_FORWARDMAIL", KEY_FORWARDMAIL},
      {(char*)0}, {(char*)0},
      {"KEY_FN_2", KEY_FN_2},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_KP7", KEY_KP7},
      {"KEY_RIGHTCTRL", KEY_RIGHTCTRL},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_VIDEO_PREV", KEY_VIDEO_PREV},
      {(char*)0}, {(char*)0},
      {"KEY_KEYBOARD", KEY_KEYBOARD},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_WWAN", KEY_WWAN},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"KEY_BLUETOOTH", KEY_BLUETOOTH},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_F7", KEY_F7},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_FN_F9", KEY_FN_F9},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_SLOW", KEY_SLOW},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_BRL_DOT7", KEY_BRL_DOT7},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_F23", KEY_F23},
      {(char*)0},
      {"KEY_FN_F2", KEY_FN_F2},
      {"KEY_FN_F12", KEY_FN_F12},
      {(char*)0}, {(char*)0},
      {"KEY_FN_B", KEY_FN_B},
      {"KEY_FN_F8", KEY_FN_F8},
      {(char*)0}, {(char*)0},
      {"KEY_KP6", KEY_KP6},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_F24", KEY_F24},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_F17", KEY_F17},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_BRL_DOT6", KEY_BRL_DOT6},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_F20", KEY_F20},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_F6", KEY_F6},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_BRL_DOT5", KEY_BRL_DOT5},
      {(char*)0},
      {"KEY_FN_F3", KEY_FN_F3},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_KP5", KEY_KP5},
      {(char*)0},
      {"KEY_FN_F4", KEY_FN_F4},
      {"KEY_YELLOW", KEY_YELLOW},
      {(char*)0}, {(char*)0},
      {"KEY_FN_F", KEY_FN_F},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
      {"KEY_FN_F10", KEY_FN_F10},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_F16", KEY_F16},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_F5", KEY_F5},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_UWB", KEY_UWB},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_FN_F7", KEY_FN_F7},
      {(char*)0}, {(char*)0},
      {"KEY_F15", KEY_F15},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_FN_F6", KEY_FN_F6},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
      {"KEY_FN_F5", KEY_FN_F5},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {"KEY_WWW", KEY_WWW}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash_key_name (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (s && (((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strcmp (str, s))
            return &wordlist[key];
        }
    }
  return 0;
}