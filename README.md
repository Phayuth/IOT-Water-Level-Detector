# Water Level Detector
![](/cover.png)

## List of Items

Arduino Nano | Water Level | Buzzer Module | Battery Pack | 9v Battery | LED Module |
------------ | ------------- | ------------- | ------------- | ------------- | ------------- |
<img src="https://www.gmelectronic.com/data/product/480_480/pctdetail.774-025.1.jpg" width="130" height="130">|<img src="https://www.renhotecic.com/image/cache/catalog/Power-Supply-Module/10pcs-DC-3V-5V-20mA-Rain-Water-Level-Sensor-Module-Detection-Liquid-Surface-Depth-Height-For-Geekcre-1633675-190-1000x1000.jpeg" width="130" height="130">|<img src="https://cf.shopee.ph/file/67ace04cfe99c4ad7481f27ad4cb59d4" width="130" height="130"> | <img src="https://m.media-amazon.com/images/I/61YfY85-y7L._AC_SL1500_.jpg" width="130" height="130">| <img src="https://webobjects2.cdw.com/is/image/CDW/5499085?$product-main$" width="130" height="130">| <img src="https://ae01.alicdn.com/kf/HTB1_UhBa7fb_uJkHFJHq6z4vFXa5.jpg" width="130" height="130">|

## Connection

<img src="/Arduino-Water-Sensor.png" width="60%">

## Code
```c++
// Sensor pins
#define waterPin A0
#define ledPin 4
#define buzzerPin 5

int waterval = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  digitalWrite(buzzerPin, HIGH); //buzzer is a low trigger type = beep on low
  digitalWrite(ledPin, HIGH); // always on to indicate the power is on
}

void loop() {
  waterval = analogRead(waterPin);
  if (waterval > 0) {
    digitalWrite(buzzerPin, LOW);
    delay(500);
    digitalWrite(buzzerPin, HIGH);
    delay(500);
    digitalWrite(buzzerPin, LOW);
    delay(500);
    digitalWrite(buzzerPin, HIGH);
    delay(500);
    digitalWrite(buzzerPin, LOW);
    delay(500);
    digitalWrite(buzzerPin, HIGH);
    delay(500);
  }
  else {
    digitalWrite(buzzerPin, HIGH);
  }
}
```
