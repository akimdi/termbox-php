/*
  +----------------------------------------------------------------------+
  | termbox                                                              |
  +----------------------------------------------------------------------+
  | Licensed under the Apache License, Version 2.0 (the "License"); you  |
  | may not use this file except in compliance with the License. You may |
  | obtain a copy of the License at                                      |
  | http://www.apache.org/licenses/LICENSE-2.0                           |
  |                                                                      |
  | Unless required by applicable law or agreed to in writing, software  |
  | distributed under the License is distributed on an "AS IS" BASIS,    |
  | WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or      |
  | implied. See the License for the specific language governing         |
  | permissions and limitations under the License.                       |
  +----------------------------------------------------------------------+
  | Author: Adam Saponara <adam@atoi.cc>                                 |
  +----------------------------------------------------------------------+
*/

#ifndef PHP_TERMBOX_CONSTANTS_H
#define PHP_TERMBOX_CONSTANTS_H

/** termbox constants */
PHP_TERMBOX_CONSTANT(TB_KEY_F1)
PHP_TERMBOX_CONSTANT(TB_KEY_F2)
PHP_TERMBOX_CONSTANT(TB_KEY_F3)
PHP_TERMBOX_CONSTANT(TB_KEY_F4)
PHP_TERMBOX_CONSTANT(TB_KEY_F5)
PHP_TERMBOX_CONSTANT(TB_KEY_F6)
PHP_TERMBOX_CONSTANT(TB_KEY_F7)
PHP_TERMBOX_CONSTANT(TB_KEY_F8)
PHP_TERMBOX_CONSTANT(TB_KEY_F9)
PHP_TERMBOX_CONSTANT(TB_KEY_F10)
PHP_TERMBOX_CONSTANT(TB_KEY_F11)
PHP_TERMBOX_CONSTANT(TB_KEY_F12)
PHP_TERMBOX_CONSTANT(TB_KEY_INSERT)
PHP_TERMBOX_CONSTANT(TB_KEY_DELETE)
PHP_TERMBOX_CONSTANT(TB_KEY_HOME)
PHP_TERMBOX_CONSTANT(TB_KEY_END)
PHP_TERMBOX_CONSTANT(TB_KEY_PGUP)
PHP_TERMBOX_CONSTANT(TB_KEY_PGDN)
PHP_TERMBOX_CONSTANT(TB_KEY_ARROW_UP)
PHP_TERMBOX_CONSTANT(TB_KEY_ARROW_DOWN)
PHP_TERMBOX_CONSTANT(TB_KEY_ARROW_LEFT)
PHP_TERMBOX_CONSTANT(TB_KEY_ARROW_RIGHT)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_TILDE)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_2)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_A)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_B)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_C)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_D)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_E)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_F)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_G)
PHP_TERMBOX_CONSTANT(TB_KEY_BACKSPACE)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_H)
PHP_TERMBOX_CONSTANT(TB_KEY_TAB)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_I)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_J)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_K)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_L)
PHP_TERMBOX_CONSTANT(TB_KEY_ENTER)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_M)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_N)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_O)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_P)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_Q)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_R)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_S)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_T)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_U)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_V)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_W)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_X)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_Y)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_Z)
PHP_TERMBOX_CONSTANT(TB_KEY_ESC)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_LSQ_BRACKET)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_3)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_4)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_BACKSLASH)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_5)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_RSQ_BRACKET)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_6)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_7)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_SLASH)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_UNDERSCORE)
PHP_TERMBOX_CONSTANT(TB_KEY_SPACE)
PHP_TERMBOX_CONSTANT(TB_KEY_BACKSPACE2)
PHP_TERMBOX_CONSTANT(TB_KEY_CTRL_8)
PHP_TERMBOX_CONSTANT(TB_MOD_ALT)
PHP_TERMBOX_CONSTANT(TB_DEFAULT)
PHP_TERMBOX_CONSTANT(TB_BLACK)
PHP_TERMBOX_CONSTANT(TB_RED)
PHP_TERMBOX_CONSTANT(TB_GREEN)
PHP_TERMBOX_CONSTANT(TB_YELLOW)
PHP_TERMBOX_CONSTANT(TB_BLUE)
PHP_TERMBOX_CONSTANT(TB_MAGENTA)
PHP_TERMBOX_CONSTANT(TB_CYAN)
PHP_TERMBOX_CONSTANT(TB_WHITE)
PHP_TERMBOX_CONSTANT(TB_BOLD)
PHP_TERMBOX_CONSTANT(TB_UNDERLINE)
PHP_TERMBOX_CONSTANT(TB_REVERSE)
PHP_TERMBOX_CONSTANT(TB_EVENT_KEY)
PHP_TERMBOX_CONSTANT(TB_EVENT_RESIZE)
PHP_TERMBOX_CONSTANT(TB_EUNSUPPORTED_TERMINAL)
PHP_TERMBOX_CONSTANT(TB_EFAILED_TO_OPEN_TTY)
PHP_TERMBOX_CONSTANT(TB_EPIPE_TRAP_ERROR)
PHP_TERMBOX_CONSTANT(TB_HIDE_CURSOR)
PHP_TERMBOX_CONSTANT(TB_INPUT_CURRENT)
PHP_TERMBOX_CONSTANT(TB_INPUT_ESC)
PHP_TERMBOX_CONSTANT(TB_INPUT_ALT)
PHP_TERMBOX_CONSTANT(TB_OUTPUT_CURRENT)
PHP_TERMBOX_CONSTANT(TB_OUTPUT_NORMAL)
PHP_TERMBOX_CONSTANT(TB_OUTPUT_256)
PHP_TERMBOX_CONSTANT(TB_OUTPUT_216)
PHP_TERMBOX_CONSTANT(TB_OUTPUT_GRAYSCALE)
PHP_TERMBOX_CONSTANT(TB_EOF)

/** termbox-php constants */
PHP_TERMBOX_CONSTANT(TB_ERROR_NONE)
PHP_TERMBOX_CONSTANT(TB_ERROR_NOT_INITIALIZED)
PHP_TERMBOX_CONSTANT(TB_ERROR_ALREADY_INITIALIZED)
PHP_TERMBOX_CONSTANT(TB_ERROR_COULD_NOT_READ_INPUT)
PHP_TERMBOX_CONSTANT(TB_ERROR_INVALID_MODE)

#endif
