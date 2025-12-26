# Wemos D1 Mini Unit Test (PlatformIO)

This project demonstrates how to run basic unit tests on a Wemos D1 Mini (ESP8266) using the Unity Test Framework within the PlatformIO environment.

## Overview

- Platform: PlatformIO
- Board: Wemos D1 Mini (ESP8266)
- Framework: Arduino + Unity Test Framework
- Purpose: Validate hardware pin definitions and basic logic

## Setup Instructions

1. Clone or download this repository.
2. Open the project folder in VS Code with the PlatformIO extension.
3. Ensure the correct board (`d1_mini`) is specified in `platformio.ini`.
4. Build and upload the firmware to your device.
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

## PlatformIO Configuration

Make sure your `platformio.ini` includes the following:

- Platform: `espressif8266`
- Board: `d1_mini`
- Framework: `arduino`
- Monitor speed: `115200`

## License

This project is licensed under the MIT License.
