/**
\defgroup doc_driver_i2c I2C Drivers

\section doc_driver_i2c_basic_and_practice I2C Basics and Best Practice

The I2C module provides a synchronous interface between the microcontroller and other I2C-compatible
devices using the two-wire I2C serial bus. Devices communicate in a master/slave environment. The I2C
bus specifies two signal connections:
- Serial Clock (SCL)
- Serial Data (SDA)

Both the SCL and SDA connections are bidirectional open-drain lines, each requiring pull-up resistors to the
supply voltage. Pulling the line to ground is considered a logical zero and letting the line float is considered 
a logical one. Every transaction on the I2C bus has to be initiated by the Master.

There are four main operations based on the direction of the data being shared during I2C communication.
- Master Transmit (master is transmitting data to a slave)
- Master Receive (master is receiving data from a slave)
- Slave Transmit (slave is transmitting data to a master)
- Slave Receive (slave is receiving data from the master)

To begin any I2C communication, the master device sends out a Start bit followed by the address byte of the
slave it intends to communicate with. This is followed by a single Read/Write bit, which determines whether
the master intends to transmit to or receive data from the slave device.

If the requested slave exists on the bus, it will respond with an Acknowledge bit, otherwise known as an ACK.
The master then continues to shift data in or out of the slave until it terminates the message with a Stop.

All I2C communication is 8-bit data and 1-bit acknowledge and shifted out MSb first. The user can
control the interaction between the software and the module using several control registers and interrupt
flags. Two pins, SDA and SCL, are exercised by the module to communicate with other external I2C
devices.


The I2C can generate interrupts when a byte has been transmitter or received. A I2C driver can therefore either be:

- Polled: The driver must poll the I2Cs status register to detect when a byte has been received or transmitted. Based 
on the result of the polling, the driver will write the next byte to be transmitted (TX data) or read the received byte 
(RX data) from the I2C bus.

- Interrupt-driven: The I2C issues an interrupt when a byte has been received or transmitted. The driver's Interrupt 
Service Routine (ISR) will write the next data or read data from the I2C Bus. 

Some devices may have DMA controllers. In such devices, I2C may also have a DMA-driven driver.

*/


                                                                                                                                                                