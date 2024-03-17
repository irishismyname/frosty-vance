import machine
import esp32
import time

p0 = machine.Pin(0, machine.Pin.IN, machine.Pin.PULL_DOWN)
esp32.wake_on_ext0(p0, esp32.WAKEUP_ANY_HIGH)

print("Starting...")
