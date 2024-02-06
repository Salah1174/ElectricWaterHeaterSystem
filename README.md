the electric water temperature control system harness both MCAL
(DIO, ADC, I2C) and HAL layer (7Seg, L293 motor driver, DHT11, external EEPROM)
to work in a steady performance, power and precision timing.
The system takes the wanted water temperature from the user via two push buttons, with a maximum of 75°c
and minimum of 35°c and store it in an external EEPROM in order to save the user's wanted temp in case of any power shortage, then
compares the wanted temperature to the current water temperature according to the ADC reading from the DHT11 Temp sensor.
if current temp is lower the the wanted temp the heating circuit starts working with a Red LED as an indicator, 
on the other hand if the current temp is higher than the wanted temp the colling circuit starts working with a Blue LED as an indicator.
The heating circuit consists of a heating element with high voltage connected to it and controled by a 5v electronic relay.
The cooling circuit consists of L293 driver and a fan motor to cool it down if needed, besides a reset button in addition to the previous.
