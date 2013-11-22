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
#include "pin.h"

/**
 * cppduino namespace
 *
 * The project use some conventions based on the Google C++ Convention,
 * where all the methods, classes, enums, are in the cppduino namespace.
 */
namespace cppduino {
  /**
   * Arduino Manager Class
   *
   * Esta classe é responsável por criar uma base class que irá
   * gerenciar todo o Arduino.
   *
   * Constructor:
   *  Arduino(uint model);
   */
  class Arduino {
  private:
    // Store the Arduino Model
    uint8_t _model;

    // Project Pins
    cppduino::Pin _pins[];
  public:
    Arduino (uint8_t model); // with a defined model (Constructor)
    Arduino (void); // without defined model (Constructor)

    /**
     * setup the pins with the output mode
     * @param pins a vector with the pins positions
     *
     * Example:
     *   - set_output_pins()
     */
    void set_output_pins(uint8_t pins[]);

    ~Arduino(); // destructor
  };
}

// End Guard
#endif