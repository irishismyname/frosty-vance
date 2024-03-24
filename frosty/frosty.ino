void setup() {
  puts("Boot!");

  const int ACTION_BUTTON = 0;

  pinMode(ACTION_BUTTON, INPUT_PULLDOWN);

  esp_sleep_enable_ext0_wakeup((gpio_num_t)ACTION_BUTTON, HIGH);
}

void loop() {
  if (digitalRead(0) == 1) {
    puts("Doing some stuff!");
    sleep(2);
    
    puts("Going to sleep.");
    esp_deep_sleep_start();
  }
}
