/**
 * cppduino - Arduino C++ Library
 * Copyright (C) 2013 Bruno Medina. All rights reserved.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

// Guard
#ifndef CPPDUINO_BASE_H
#define CPPDUINO_BASE_H

// Project Dependencies
#include "Arduino.h"
#include "cppduino.h"

/**
 * cppduino namespace
 *
 * The project use some conventions based on the Google C++ Convention,
 * where all the methods, classes, enums, are in the cppduino namespace.
 */
namespace cppduino {
  /**
   * Pin Manager
   *
   * Esta classe é responsável por controlar os pins com diversas
   * funções de gerenciamento.
   */
  class Pin {
  private:
    uint8_t _port; // pin field, 0 ~ 13
    bool _status; // on or off
    uint8_t _mode; // 0x0, 0x1 or 0x2
  public:
    /**
     * Create the Pin
     *
     * @param port receive the pin field (0~13)
     * @param status on or off
     * @param mode 0x0, 0x1 or 0x2 (INPUT, OUTPUT, INPUT_PULLUP)
     */
    Pin(uint8_t port, bool status, uint8_t mode);
  };
  
}

// End Guard
#endif