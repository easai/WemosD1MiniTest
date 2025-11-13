# Wemos D1 Mini Unit Test Example

This project demonstrates how to run basic unit tests on a Wemos D1 Mini (ESP8266) using the Unity Test Framework in the Arduino environment. 
It serves as a minimal setup to validate hardware constants and simple logic operations.

## Overview

- Platform: Arduino
- Board: Wemos D1 Mini (ESP8266)
- Framework: Unity Test Framework
- Purpose: Validate hardware pin definitions and basic logic

## Setup Instructions

1. Clone or download the repository.
2. Open the sketch in the Arduino IDE.
3. Select the appropriate board and COM port.
4. Upload the sketch to your device.
5. Open the Serial Monitor to view test results.

## Tests Included

- LED Pin Test: Verifies that the built-in LED is mapped to the expected GPIO pin (typically pin 2 on Wemos D1 Mini).
- Addition Test: Confirms basic arithmetic logic as a sanity check for the test framework.

## Execution Behavior

- All tests are executed once during the setup phase after a short delay to allow the serial connection to initialize.
- The loop function remains empty, as tests are not repeated.

## Notes

- Test results are printed to the Serial Monitor.
- If you're using a different board, you may need to adjust the expected LED pin value.
- This setup can be extended to test additional hardware features or application logic.


This project is licensed under the MIT License.
