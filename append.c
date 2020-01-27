// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    if IS_LAYER_ON(3) {
        ergodox_right_led_1_on();
    }
    if IS_LAYER_ON(1) {
        ergodox_right_led_2_on();
    }
    if IS_LAYER_ON(2) {
        ergodox_right_led_3_on();
    }
};
