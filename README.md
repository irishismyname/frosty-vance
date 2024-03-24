# Frosty 2.0

## Environment Setup

1. Install [homebrew](https://brew.sh)

1. Install `arudino-cli`: `brew install arduino-cli`

1. Add the Espressif package index:

    ```bash
    arduino-cli config add board_manager.additional_urls https://espressif.github.io/arduino-esp32/package_esp32_index.json
    ```

1. Update the core index: `arduino-cli core update-index`

1. Install the `esp32:esp32` core: `arduino-cli core install esp32:esp32`

    If this worked, you should have the latest from Espressif's [releases page](https://github.com/espressif/arduino-esp32/releases).

1. Upload the sketch:

    ```bash
    arduino-cli upload ./frosty/frosty.ino -p /dev/ttyUSB0 -b esp32:esp32:esp32
    ```
