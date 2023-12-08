9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE9 low (0)
    S3_SetLow();
    </code>

*/
#define S3_SetLow()           (_LATE9 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE9, using LATE9.

  @Description
    Toggles the GPIO pin, RE9, using LATE9.

  @Preconditions
    The RE9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE9
    S3_Toggle();
    </code>

*/
#define S3_Toggle()           (_LATE9 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE9.

  @Description
    Reads the value of the GPIO pin, RE9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE9
    postValue = S3_GetValue();
    </code>

*/
#define S3_GetValue()         _RE9
/**
  @Summary
    Configures the GPIO pin, RE9, as an input.

  @Description
    Configures the GPIO pin, RE9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE9 as an input
    S3_SetDigitalInput();
    </code>

*/
#define S3_SetDigitalInput()  (_TRISE9 = 1)
/**
  @Summary
    Configures the GPIO pin, RE9, as an output.

  @Description
    Configures the GPIO pin, RE9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE9 as an output
    S3_SetDigitalOutput();
    </code>

*/
#define S3_SetDigitalOutput() (_TRISE9 = 0)

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the dsPIC33CK256MP508
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize (void);

/**
  @Summary
    Callback for RB2 Pin.

  @Description
    This routine is callback for RB2 Pin

  @Param
    None.

  @Returns
    None
 
 
  @Example 
    <code>
        RB2_SetInterruptHandler(&RB2_CallBack);
    </code>
*/
void RB2_CallBack(void);

/**
  @Summary
    Callback for S1 Pin.

  @Description
    This routine is callback for S1 Pin

  @Param
    None.

  @Returns
    None
 
 
  @Example 
    <code>
        S1_SetInterruptHandler(&S1_CallBack);
    </code>
*/
void S1_CallBack(void);

/**
  @Summary
    Callback for S3 Pin.

  @Description
    This routine is callback for S3 Pin

  @Param
    None.

  @Returns
    None
 
 
  @Example 
    <code>
        S3_SetInterruptHandler(&S3_CallBack);
    </code>
*/
void S3_CallBack(void);

/**
  @Summary
    Callback for S2 Pin.

  @Description
    This routine is callback for S2 Pin

  @Param
    None.

  @Returns
    None
 
 
  @Example 
    <code>
        S2_SetInterruptHandler(&S2_CallBack);
    </code>
*/
void S2_CallBack(void);


/**
  @Summary
    Assigns a function pointer with a callback address.

  @Description
    This routine assigns a function pointer with a call