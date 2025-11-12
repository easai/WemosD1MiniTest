#include <Arduino.h>
#include <unity.h>

void test_led_builtin_pin_number() {
    TEST_ASSERT_EQUAL(2, LED_BUILTIN);  // Adjust if your board uses a different pin
}

void test_addition() {
    TEST_ASSERT_EQUAL(4, 2 + 2);
}

void setup() {
    // Wait for serial monitor to connect
    delay(2000);
    UNITY_BEGIN();
    RUN_TEST(test_led_builtin_pin_number);
    RUN_TEST(test_addition);
    UNITY_END();
}

void loop() {
    // Leave empty
}
