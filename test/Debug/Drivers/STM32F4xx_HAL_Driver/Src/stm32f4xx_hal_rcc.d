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
    This routine assigns a function pointer with a callback address.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        S1_SetInterruptHandler(&S1_CallBack);
    </code>
*/
void S1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Assigns a function pointer with a callback address.

  @Description
    This routine assigns a function pointer with a callback address.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        S1_SetIOCInterruptHandler(&S1_CallBack);
    </code>
*/
void __attribute__((deprecated("\nThis will be removed in future MCC releases. \nUse S1_SetInterruptHandler instead."))) S1_SetIOCInterruptHandler(void *handler);

/**
  @Summary
    Assigns a function pointer with a callback address.

  @Description
    This routine assigns a function pointer with a callback address.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        S2_SetInterruptHandler(&S2_CallBack);
    </code>
*/
void S2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Assigns a function poin