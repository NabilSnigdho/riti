/* Text to put at the beginning of the generated file. Probably a license. */

#ifndef RITI_H
#define RITI_H

/* Generated with cbindgen:0.8.7 */

/* 
 * Warning, this file is autogenerated by cbindgen. Don't modify this manually.
 * Run this command to generate this file: cbindgen --config cbindgen.toml --output include/riti.h 
 */


#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <new>

static const uint8_t IM_COMMIT = 1 << 1;

static const uint8_t IM_DEFAULT = 0;

static const uint8_t IM_KEY_ACCEPTED = 1 << 0;

static const uint8_t IM_NEED_RESET = 1 << 3;

static const uint8_t IM_NEED_UPDATE = 1 << 2;

static const uint8_t MODIFIER_ALT = 1 << 2;

static const uint8_t MODIFIER_CTRL = 1 << 1;

static const uint8_t MODIFIER_SHIFT = 1 << 0;

static const uint16_t VC_0 = 11;

static const uint16_t VC_1 = 2;

static const uint16_t VC_2 = 3;

static const uint16_t VC_3 = 4;

static const uint16_t VC_4 = 5;

static const uint16_t VC_5 = 6;

static const uint16_t VC_6 = 7;

static const uint16_t VC_7 = 8;

static const uint16_t VC_8 = 9;

static const uint16_t VC_9 = 10;

static const uint16_t VC_A = 41140;

static const uint16_t VC_ALT = 56;

static const uint16_t VC_AMPERSAND = 65;

static const uint16_t VC_APOSTROPHE = 40;

static const uint16_t VC_ASTERISK = 66;

static const uint16_t VC_AT = 60;

static const uint16_t VC_B = 41141;

static const uint16_t VC_BACKSPACE = 14;

static const uint16_t VC_BACK_SLASH = 43;

static const uint16_t VC_BAR = 93;

static const uint16_t VC_BRACE_LEFT = 91;

static const uint16_t VC_BRACE_RIGHT = 92;

static const uint16_t VC_BRACKET_LEFT = 26;

static const uint16_t VC_BRACKET_RIGHT = 27;

static const uint16_t VC_C = 41142;

static const uint16_t VC_CIRCUM = 64;

static const uint16_t VC_COLON = 99;

static const uint16_t VC_COMMA = 51;

static const uint16_t VC_CONTROL = 29;

static const uint16_t VC_D = 41143;

static const uint16_t VC_DELETE = 3667;

static const uint16_t VC_DOLLAR = 62;

static const uint16_t VC_DOWN = 57424;

static const uint16_t VC_E = 41144;

static const uint16_t VC_END = 3663;

static const uint16_t VC_ENTER = 28;

static const uint16_t VC_EQUALS = 13;

static const uint16_t VC_EXCLAIM = 59;

static const uint16_t VC_F = 41145;

static const uint16_t VC_G = 41146;

static const uint16_t VC_GRAVE = 41;

static const uint16_t VC_GREATER = 102;

static const uint16_t VC_H = 41147;

static const uint16_t VC_HASH = 61;

static const uint16_t VC_HOME = 3655;

static const uint16_t VC_I = 41148;

static const uint16_t VC_INSERT = 3666;

static const uint16_t VC_J = 41149;

static const uint16_t VC_K = 41150;

static const uint16_t VC_KP_0 = 82;

static const uint16_t VC_KP_1 = 79;

static const uint16_t VC_KP_2 = 80;

static const uint16_t VC_KP_3 = 81;

static const uint16_t VC_KP_4 = 75;

static const uint16_t VC_KP_5 = 76;

static const uint16_t VC_KP_6 = 77;

static const uint16_t VC_KP_7 = 71;

static const uint16_t VC_KP_8 = 72;

static const uint16_t VC_KP_9 = 73;

static const uint16_t VC_KP_ADD = 78;

static const uint16_t VC_KP_DECIMAL = 83;

static const uint16_t VC_KP_DIVIDE = 3637;

static const uint16_t VC_KP_ENTER = 3612;

static const uint16_t VC_KP_EQUALS = 3597;

static const uint16_t VC_KP_MULTIPLY = 55;

static const uint16_t VC_KP_SUBTRACT = 74;

static const uint16_t VC_L = 41151;

static const uint16_t VC_LEFT = 57419;

static const uint16_t VC_LESS = 101;

static const uint16_t VC_M = 41152;

static const uint16_t VC_MINUS = 12;

static const uint16_t VC_N = 41153;

static const uint16_t VC_O = 41154;

static const uint16_t VC_P = 41155;

static const uint16_t VC_PAGE_DOWN = 3665;

static const uint16_t VC_PAGE_UP = 3657;

static const uint16_t VC_PAREN_LEFT = 67;

static const uint16_t VC_PAREN_RIGHT = 68;

static const uint16_t VC_PERCENT = 63;

static const uint16_t VC_PERIOD = 52;

static const uint16_t VC_PLUS = 88;

static const uint16_t VC_Q = 41156;

static const uint16_t VC_QUESTION = 103;

static const uint16_t VC_QUOTE = 100;

static const uint16_t VC_R = 41157;

static const uint16_t VC_RIGHT = 57421;

static const uint16_t VC_S = 41158;

static const uint16_t VC_SEMICOLON = 39;

static const uint16_t VC_SHIFT = 42;

static const uint16_t VC_SLASH = 53;

static const uint16_t VC_SPACE = 57;

static const uint16_t VC_T = 41159;

static const uint16_t VC_TAB = 15;

static const uint16_t VC_TILDE = 1;

static const uint16_t VC_U = 41160;

static const uint16_t VC_UNDERSCORE = 87;

static const uint16_t VC_UNKNOWN = 70;

static const uint16_t VC_UP = 57416;

static const uint16_t VC_V = 41161;

static const uint16_t VC_W = 41162;

static const uint16_t VC_X = 41163;

static const uint16_t VC_Y = 41164;

static const uint16_t VC_Z = 41165;

/*
 Context handle used for libRiti IM APIs
 */
struct RitiContext;

/*
 Suggestions which are intend to be shown by the IM's candidate window.
 */
struct Suggestion;

extern "C" {

void riti_context_free(RitiContext *ptr);

bool riti_context_key_handled(RitiContext *ptr);

RitiContext *riti_context_new();

Suggestion *riti_get_suggestion_for_key(RitiContext *ptr,
                                        uint16_t key,
                                        uint8_t modifier);

void riti_suggestion_free(Suggestion *ptr);

char *riti_suggestion_get_auxiliary_text(const Suggestion *ptr);

uintptr_t riti_suggestion_get_length(const Suggestion *ptr);

char *const *riti_suggestion_get_suggestions(const Suggestion *ptr);

bool riti_suggestion_is_empty(const Suggestion *ptr);

} // extern "C"

#endif // RITI_H
