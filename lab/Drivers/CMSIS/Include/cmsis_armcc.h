<config configName="default" projectName="7SEGMENTS_TIMER_MINIPROJECT" configVersion="1.1" device="dsPIC33CK256MP508" deviceLibraryClass="com.microchip.mcc.mcu16.Mcu16PeripheralLibrary" coreVersion="5.5.7">
   <usedPackages class="java.util.ArrayList"/>
   <usedClasses class="java.util.TreeMap">
      <entry>
         <string>DMT</string>
         <string>class com.microchip.mcc.mcu16.systemManager.dmt.DMT</string>
      </entry>
      <entry>
         <string>EXT_INT</string>
         <string>class com.microchip.mcc.mcu16.modules.externalInterrupt.EXTINT</string>
      </entry>
      <entry>
         <string>ICD</string>
         <string>class com.microchip.mcc.mcu16.systemManager.icd.Icd</string>
      </entry>
      <entry>
         <string>INTERNAL OSCILLATOR</string>
         <string>class com.microchip.mcc.mcu16.systemManager.clk.Clock</string>
      </entry>
      <entry>
         <string>Interrupt Module</string>
         <string>class com.microchip.mcc.mcu16.interruptManager_dsPIC.InterruptManager_dsPIC</string>
      </entry>
      <entry>
         <string>Main Manager</string>
         <string>class com.microchip.mcc.mcu16.mainManager.MainManager</string>
      </entry>
      <entry>
         <string>Pin Module</string>
         <string>class com.microchip.mcc.mcu16.pinManager.PinManager</string>
      </entry>
      <entry>
         <string>RESET</string>
         <string>class com.microchip.mcc.mcu16.systemManager.reset.RESET</string>
      </entry>
      <entry>
         <string>System Module</string>
         <string>class com.microchip.mcc.mcu16.systemManager.DefaultSystemManagerMcu16</string>
      </entry>
      <entry>
         <string>WATCHDOG</string>
         <string>class com.microchip.mcc.mcu16.systemManager.wdt.Wdt</string>
      </entry>
   </usedClasses>
   <usedLibraries class="java.util.ArrayList">
      <ILibraryFile class="com.microchip.mcc.core.library.BaseLibraryFile" libraryClass="com.microchip.mcc.mcu16.Mcu16PeripheralLibrary" version="1.171.4"/>
   </usedLibraries>
   <tokenMap class="java.util.TreeMap">
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="DMT" name="DMT_DMTIISRFunction"/>
         <value>ISR_DMT_DMTI</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="DMT" name="USEDMT"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="DMT" name="customFDMTCNT"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="DMT" name="customFDMTIVT"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="DMT" name="customMasterSlaveViewerEnable"/>
         <value>enabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="DMT" registerAlias="DMTCON" settingAlias="ON" alias="disabled"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="DMT" registerAlias="DMTCON" settingAlias="ON" alias="enabled"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.RegisterKey" moduleName="DMT" registerAlias="DMTCLR"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.RegisterKey" moduleName="DMT" registerAlias="DMTCON"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.RegisterKey" moduleName="DMT" registerAlias="DMTPRECLR"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="DMT" registerAlias="DMTCLR" settingAlias="STEP2"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="DMT" registerAlias="DMTCON" settingAlias="ON"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="DMT" registerAlias="DMTI" settingAlias="context"/>
         <value>CTXT1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="DMT" registerAlias="DMTI" settingAlias="enable"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="DMT" registerAlias="DMTI" settingAlias="flag"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="DMT" registerAlias="DMTI" settingAlias="priority"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="DMT" registerAlias="DMTPRECLR" settingAlias="STEP1"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="EXT_INT" name="EXT_INT_INT0IISRFunction"/>
         <value>ISR_EXT_INT_INT0I</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="EXT_INT" name="EXT_INT_INT1IISRFunction"/>
         <value>ISR_EXT_INT_INT1I</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="EXT_INT" name="EXT_INT_INT2IISRFunction"/>
         <value>ISR_EXT_INT_INT2I</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="EXT_INT" name="EXT_INT_INT3IISRFunction"/>
         <value>ISR_EXT_INT_INT3I</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="EXT_INT" name="INT0"/>
         <value>enabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="ALTIVT" alias="disabled"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="ALTIVT" alias="enabled"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="DISI" alias="disabled"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="DISI" alias="enabled"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="GIE" alias="disabled"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="GIE" alias="enabled"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="INT0EP" alias="Negative Edge"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="INT0EP" alias="Positive Edge"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="INT1EP" alias="Negative Edge"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="INT1EP" alias="Positive Edge"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="INT2EP" alias="Negative Edge"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="INT2EP" alias="Positive Edge"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="INT3EP" alias="Negative Edge"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="INT3EP" alias="Positive Edge"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="SWTRAP" alias="disabled"/>
         <value>0</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.OptionKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="SWTRAP" alias="enabled"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.RegisterKey" moduleName="EXT_INT" registerAlias="INTCON2"/>
         <value>32768</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT0I" settingAlias="context"/>
         <value>CTXT1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT0I" settingAlias="enable"/>
         <value>enabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT0I" settingAlias="flag"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT0I" settingAlias="priority"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT1I" settingAlias="context"/>
         <value>CTXT1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT1I" settingAlias="enable"/>
         <value>enabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT1I" settingAlias="flag"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT1I" settingAlias="priority"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT2I" settingAlias="context"/>
         <value>CTXT1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT2I" settingAlias="enable"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT2I" settingAlias="flag"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT2I" settingAlias="priority"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT3I" settingAlias="context"/>
         <value>CTXT1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT3I" settingAlias="enable"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT3I" settingAlias="flag"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INT3I" settingAlias="priority"/>
         <value>1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="ALTIVT"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="DISI"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="GIE"/>
         <value>enabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="INT0EP"/>
         <value>Positive Edge</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="INT1EP"/>
         <value>Positive Edge</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="INT2EP"/>
         <value>Positive Edge</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="INT3EP"/>
         <value>Positive Edge</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.SettingKey" moduleName="EXT_INT" registerAlias="INTCON2" settingAlias="SWTRAP"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="ICD" name="customMasterSlaveViewerEnable"/>
         <value>enabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AFVCODIV"/>
         <value>FVCO/4</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AFVCODIVFreq"/>
         <value>300000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AFVCOFreq"/>
         <value>1200000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AUXCLK_CHANGE"/>
         <value>8000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AUXCLK_ENABLE"/>
         <value>enabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AUXCLK_FBDIVISOR"/>
         <value>1:150</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AUXCLK_FBDIVISOR_FREQUENCY"/>
         <value>1200000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AUXCLK_PLL_ENABLE"/>
         <value>enabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AUXCLK_PLL_ENABLE_FREQUENCY"/>
         <value>8000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AUXCLK_POSTSCALER"/>
         <value>1:4</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AUXCLK_POSTSCALER2"/>
         <value>1:1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AUXCLK_POSTSCALER2_FREQUENCY"/>
         <value>300000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AUXCLK_POSTSCALER_FREQUENCY"/>
         <value>300000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AUXCLK_PRESCALER"/>
         <value>1:1</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AUXCLK_PRESCALER_FREQUENCY"/>
         <value>8000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="AUXCLK_SOURCE"/>
         <value>FRC</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="Achievable CAN Clock Frequency"/>
         <value/>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="CAN Clock Source"/>
         <value>No Clock Selected</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="CAN Clock Source Frequency"/>
         <value/>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="CLKPinsInput"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="CLKPinsOutput"/>
         <value>enabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="CLOCK_FOSC"/>
         <value>8000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="CLOCK_FOSC2"/>
         <value>4000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="CLOCK_FRC"/>
         <value>8000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="CLOCK_LPRC"/>
         <value>32000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="CLOCK_PRIMARY"/>
         <value>8000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="CLOCK_USB"/>
         <value/>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="ClockSource"/>
         <value>FRC Oscillator</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="ClockSwitching"/>
         <value>enabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FVCODIV"/>
         <value>FVCO/4</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FVCODIVFreq"/>
         <value>300000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FVCOFreq"/>
         <value>1200000000</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FailSafe"/>
         <value>disabled</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureAutoTune"/>
         <value>UNSUPPORTED</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureAuxClockChange"/>
         <value>NOTAVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureAuxClockEnable"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureAuxClockFBDivisor"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureAuxClockPostscaler"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureAuxClockPostscaler2"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureAuxClockPrescaler"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureAuxClockSource"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureAuxPll"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureAvcoDivider"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureCANFDClock"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureClockChange"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureClockSource"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureClockSwitching"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureCodeGuard"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureFrcEnable"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureFrcScaler"/>
         <value>NOTAVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureIESOUpdate"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureOscfDivisor"/>
         <value>UNSUPPORTED</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureOscfdivEnable"/>
         <value>UNSUPPORTED</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeaturePllCpuDivScaler"/>
         <value>UNSUPPORTED</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeaturePllDisplayScaler"/>
         <value>UNSUPPORTED</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeaturePllEnable"/>
         <value>NOTAVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeaturePllFeedbackDivisor"/>
         <value>NOTAVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeaturePllGraphicsSelect"/>
         <value>UNSUPPORTED</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeaturePllPostScaler"/>
         <value>NOTAVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeaturePllScaler"/>
         <value>NOTAVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeaturePllTwoStagePostScaler"/>
         <value>NOTAVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeaturePoscErrataWorkaround"/>
         <value>UNSUPPORTED</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureRefClkOutoutEnable"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureRefoClockDivSwitch"/>
         <value>NOTAVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureRefoClockDivider"/>
         <value>NOTAVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureRefoClockSource"/>
         <value>NOTAVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureRefoClockTrim"/>
         <value>NOTAVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureRefoOutputPinEnable"/>
         <value>NOTAVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureSoscClock"/>
         <value>AVAILABLE</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureSoscEnable"/>
         <value>UNSUPPORTED</value>
      </entry>
      <entry>
         <key class="com.microchip.mcc.core.tokenManager.CustomKey" moduleName="INTERNAL OSCILLATOR" name="FeatureUsb"/>
         <value>UNSUPPORTED</value>
      </entry>
      <entry>
         <key class="com.mi