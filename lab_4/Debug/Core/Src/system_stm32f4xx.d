 pin, RC0, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC0 as an output
    channel_AN12_SetDigitalOutput();
    </code>

*/
#define channel_AN12_SetDigitalOutput() (_TRISC0 = 0)
/**
  @Summary
    Sets the GPIO pin, RE13, high using LATE13.

  @Description
    Sets the GPIO pin, RE13, high using LATE13.

  @Preconditions
    The RE13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE13 high (1)
    RGB_BLUE_SetHigh();
    </code>

*/
#define RGB_BLUE_SetHigh()          (_LATE13 = 1)
/**
  @Summary
    Sets the GPIO pin, RE13, low using LATE13.

  @Description
    Sets the GPIO pin, RE13, low using LATE13.

  @Preconditions
    The RE13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE13 low (0)
    RGB_BLUE_SetLow();
    </code>

*/
#define RGB_BLUE_SetLow()           (_LATE13 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE13, using LATE13.

  @Description
    Toggles the GPIO pin, RE13, using LATE13.

  @Preconditions
    The RE13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE13
    RGB_BLUE_Toggle();
    </code>

*/
#define RGB_BLUE_Toggle()           (_LATE13 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE13.

  @Description
    Reads the value of the GPIO pin, RE13.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE13
    postValue = RGB_BLUE_GetValue();
    </code>

*/
#define RGB_BLUE_GetValue()         _RE13
/**
  @Summary
    Configures the GPIO pin, RE13, as an input.

  @Description
    Configures the GPIO pin, RE13, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE13 as an input
    RGB_BLUE_SetDigitalInput();
    </code>

*/
#define RGB_BLUE_SetDigitalInput()  (_TRISE13 = 1)
/**
  @Summary
    Configures the GPIO pin, RE13, as an output.

  @Description
    Configures the GPIO pin, RE13, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE13 as an output
    RGB_BLUE_SetDigitalOutput();
    </code>

*/
#define RGB_BLUE_SetDigitalOutput() (_TRISE13 = 0)
/**
  @Summary
    Sets the GPIO pin, RE14, high using LATE14.

  @Description
    Sets the GPIO pin, RE14, high using LATE14.

  @Preconditions
    The RE14 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE14 high (1)
    RGB_GREEN_SetHigh();
    </code>

*/
#define RGB_GREEN_SetHigh()          (_LATE14 = 1)
/**
  @Summary
    Sets the GPIO pin, RE14, low using LATE14.

  @Description
    Sets the GPIO pin, RE14, low using LATE14.

  @Preconditions
    The RE14 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE14 low (0)
    RGB_GRE