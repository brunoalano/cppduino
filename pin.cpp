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
#include "Arduino.h"
#include "pin.h"

/**
 * Create a new Pin Object
 *
 * Este método cria um novo objeto de Pin, onde recebe a porta e
 * o status inicial dele.
 *
 * @param port receive the pin field (0~13)
 * @param status default status its false
 * @param mode 0x0, 0x1 or 0x2 (INPUT, OUTPUT, INPUT_PULLUP)
 */
cppduino::Pin::Pin(uint8_t port, bool status, uint8_t mode):_port(port),_status(status),_mode(mode) {
  // Setup the Pin Mode
  pinMode(port, mode);

  // Define status
  if (status) {
    digitalWrite(port, 0x1);
  } else {
    digitalWrite(port, 0x0);
  }
}

cppduino::Pin::~Pin(){

}