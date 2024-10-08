#ifndef PLATFORMIO_NULI_AVIONICS_FLIGHT_SOFTWARE_GENERICSENSOR_H
#define PLATFORMIO_NULI_AVIONICS_FLIGHT_SOFTWARE_GENERICSENSOR_H

#include <Avionics.h>

/**
 * @class GenericSensor
 * @brief Underlying interface to all sensors
 * @details Provide virtual methods for common sensor function. Currently this is not a used feature, but is
 * implemented for future code that may require a BaseSensor class
 */
class GenericSensor {
public:
    /**
     * @brief Initialize the sensor
     * @details Enabling any peripherals, confirm sensor is talking, set configuration registers on the sensor
     */
    virtual void setup() {}

    /**
     * @brief Read data from the sensor
     * @details Read in one reading from the sensor, and convert the data to usefully units/numbers.
     * Currently is allowed to block the loop to wait for data from the sensor for a few ms.
     */
    virtual void read() {}
};

#endif //PLATFORMIO_NULI_AVIONICS_FLIGHT_SOFTWARE_GENERICSENSOR_H
