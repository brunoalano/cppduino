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

// Project Dependencies
#include "base.h"

/**
 * Arduino Class Constructor
 * with model
 *
 * Esta modelo inicializa a classe Arduino com um modelo especificado
 * de placa.
 *
 * @params uint8_t model (look for cppduino::models)
 */
cppduino::Arduino::Arduino(uint8_t model):_model(model) {
}

/**
 * Arduino Class Constructor
 * without model
 *
 * Inicializa a classe Arduino sem um modelo específico
 */
cppduino::Arduino::Arduino(void) {
}

/**
 * Arduino Class Destructor
 *
 * TODO:
 *  - clean memory
 *  - clean serial
 */
cppduino::Arduino::~Arduino() {
}

/**
 * setup the pins with the output mode
 * @param pins a vector with the pins positions
 */
void cppduino::Arduino::set_pin(cppduino::Pin pin) {
  // Get pin port
  this->_pins[pin.getPort()] = pin;
}

/**
 * get a pin
 *
 * @param uint8_t port
 * @return cppduino::Pin
 */
cppduino::Pin cppduino::Arduino::get_pin(uint8_t port) {
  // return the pin
  return this->_pins[port];
}