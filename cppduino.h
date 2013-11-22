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
#ifndef CPPDUINO_CPPDUINO_H
#define CPPDUINO_CPPDUINO_H

// Project Dependencies
#include "Arduino.h"

// Load the project
#include "pin.h"
#include "base.h"

/**
 * cppduino namespace
 *
 * The project use some conventions based on the Google C++ Convention,
 * where all the methods, classes, enums, are in the cppduino namespace.
 */
namespace cppduino {
  /**
   * Arduino Models
   *
   * Alocamos as versão suportadas do Arduino onde no futuro
   * poderemos utilizar
   */
  namespace models {
    enum
    {
      ARDUINO_MODEL_UNO
    };
  }

  /**
   * Arduino Mode
   *
   * Modos de saídas das portas digitais, podendo
   * ser ligadas ou desligadas
   */
  namespace output {
    enum
    {
      ON = OUTPUT,
      OFF = INPUT
    };
  }
}

// End Guard
#endif