#include <stdio.h>

struct SmartDevice {
    int deviceID;
    char deviceName[50];
    int status;
    float ratedPowerKW;
};

struct EnergySensor {
    float voltageVolts;
    float currentAmperes;
    int unoccupancyMinutes;
};

int main() {
    struct SmartDevice aircon;
    struct EnergySensor sensor;
    float operatingHours;
    float totalKWh = 0.0f;
    float totalCost = 0.0f;

    aircon.deviceID = 201;
    sprintf(aircon.deviceName, "Dieu hoa cong suat lon");
    aircon.status = 1;
    aircon.ratedPowerKW = 5.0f;

    sensor.voltageVolts = 220.0f;
    sensor.currentAmperes = 28.0f;
    sensor.unoccupancyMinutes = 20;

    printf("Nhap so gio van hanh trong thang: ");
