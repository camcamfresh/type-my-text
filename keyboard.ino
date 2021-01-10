SYSTEM_MODE(MANUAL);
STARTUP(Keyboard.begin());

void button_handler(system_event_t event, int duration, void* )
{
    if (!duration) { // just pressed
        Keyboard.write("password");
        RGB.control(true);
        RGB.color(255, 0, 255); // MAGENTA
    }
    else { // just released
        RGB.control(false);
    }
}

void setup()
{
    System.on(button_status, button_handler);
}

void loop()
{
}
