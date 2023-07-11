const int IN1 = 7; //ForOpenTheDoor
const int IN2 = 6; //ForCloseTheDoor
const int ENA = 9;

const int booleanSensorClose = 4;
const int booleanSensorOpen = 3;
const int switchSensor = 2;

void setup() {
        pinMode(IN1, OUTPUT); //define The Output pins  Motor
        pinMode(IN2, OUTPUT);
        pinMode(ENA, OUTPUT);

        pinMode(booleanSensorClose, INPUT_PULLUP);
        pinMode(booleanSensorOpen, INPUT_PULLUP);

        pinMode(switchSensor, INPUT_PULLUP);
        Serial.begin(9600);
}
void loop() {
        int sensorClose = digitalRead(booleanSensorClose);
        int sensorOpen = digitalRead(booleanSensorOpen);
        int sensorSwitch = digitalRead(switchSensor);

        //power of the motor

        if (sensorSwitch == 1) {
                analogWrite(ENA, 255);
                digitalWrite(IN1, 0);
                digitalWrite(IN2, 1);
                if (sensorOpen == 1) {
                        analogWrite(ENA, 0);
                        digitalWrite(IN1, 0);
                        digitalWrite(IN2, 0);
                }
        }
        if (sensorSwitch == 0) {
                analogWrite(ENA, 255);
                digitalWrite(IN2, 0);
                digitalWrite(IN1, 1);
                if (sensorClose == 1) {
                        analogWrite(ENA, 0);
                        digitalWrite(IN2, 0);
                        digitalWrite(IN1, 0);
                }
        }
        Serial.println("switch");
        Serial.println(sensorSwitch);
        Serial.println("open");
        Serial.println(sensorOpen);
        Serial.println("close");
        Serial.println(sensorClose);
}