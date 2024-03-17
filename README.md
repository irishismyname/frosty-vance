# Frosty 2.0

## Environment Setup

First you need `esptool` to install the micropython firmware for ESP32/WROOM

```bash
pip install esptool
```

Identify the port (usually `/dev/ttyUSB0`)

```bash
dmesg | grep tty
```

Erase the flash: [micropython installation instructions](https://micropython.org/download/ESP32_GENERIC/)

```bash
esptool.py --chip esp32 --port /dev/ttyUSB0 erase_flash
```

Download the latest firmware

```bash
curl -o ./bin/firmware.bin https://micropython.org/resources/firmware/ESP32_GENERIC-20240222-v1.22.2.bin
```

Erase and write flash

```bash
esptool.py --port /dev/ttyUSB0 erase_flash
```

```bash
esptool.py --chip esp32 --port /dev/ttyUSB0 --baud 460800 write_flash -z 0x1000 ./bin/firmware.bin
```

Start a picocom session to get the Python REPL

```bash
picocom /dev/ttyUSB0 -b115200
```

Exit with ctrl+a then ctrl+x

Install the stubs for the firmware

```bash
pip install -U micropython-esp32-stubs==1.22.0.* --no-user --target .vscode/Pico-W-Stub
```
