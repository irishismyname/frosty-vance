import time
import machine

print("Doing some stuff")
time.sleep(2)

print("Doing other stuff")
time.sleep(1)

print("Going back to sleep")
machine.deepsleep()