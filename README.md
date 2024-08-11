**Developed automatic temperature & humidity monitoring and control for optimal indoor comfort using C-DAC’s Indus-IoT board**

HARDWARE USED:
1.Indus IoT Kit (Indus-IoT Board + USB
cable)
2.DC Fan 
3.L293D driver
4. SHTC3 - Temperature & humidity sensor
5. LDR Sensor

OBJECTIVES:
1.Control of room comfort using real time data from
humidity & temperature sensor onboard the Indus
iot microcontroller.
2.Creating an online dashboard to view real-time
updates.

We came up with a system to control the room comfort using the humidity and temperature data retrieved in real time from the Indus IOT microcontroller. The user could also adjust the comfort levels to his desire using his mobile phone, which was implemented by using the MQTT protocol. Also, we designed a web based online dashboard to view the collected data in real time by implementing a cloud based server called 'PubNub'.

IMPLEMENTATION STRATEGY-
1. Obtain temperature and relative humidity from
RH & T sensor on the indus iot board.
2. Display humidity & temperature on PubNub online
dashboard and MQTT on android platform.
3. Control fan automatically based on the humidity
& temperature detected from the board.
4. LDR control

USE CASES-
1.Real time data monitoring – Collects and updates the required data through
the onboard sensors in real time.
2.Enhanced precision – The user can accurately measure the required
parameters as per his needs with precision.
3.Initiative user interface - The system will provide a user-friendly interface
for remote monitoring and control, giving users real-time feedback on room
conditions and control options.
4.Comfort optimization – Aggregates and gives a one stop user interface for all
monitoring needs.
