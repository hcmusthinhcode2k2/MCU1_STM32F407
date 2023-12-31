s\system.h</file>
         <hash>326a77442ae056cd4ae2abc4ece641abe57556a98cc3847c71801608689c2a3d</hash>
      </entry>
      <entry>
         <file>mcc_generated_files\pin_manager.c</file>
         <hash>6242f4b302abf60f68896b4356573f7a37f6da2407ccd030313c3b20a6d93af1</hash>
      </entry>
      <entry>
         <file>mcc_generated_files\system.c</file>
         <hash>a02c1bca8a079a41311a0bc50b27dbb870be9d36f27f6b5480e4bb234ed7715d</hash>
      </entry>
      <entry>
         <file>mcc_generated_files\traps.c</file>
         <hash>dbccacdf05ed51725c79ec0fafc1a0f17fcd9615dec29759e0e78be48a0af76a</hash>
      </entry>
      <entry>
         <file>mcc_generated_files\clock.h</file>
         <hash>cd2c3821d974aac434f954d45cab3daafed3250abb8e5e909f4a12a22ee8364a</hash>
      </entry>
      <entry>
         <file>mcc_generated_files\traps.h</file>
         <hash>dc2cdfa18d19e37fd22154ab5d7926da8215a9665612d9a4d9623c63508d7002</hash>
      </entry>
      <entry>
         <file>mcc_generated_files\mcc.c</file>
         <hash>b4942e221951f3bbebf1b41292d5afeb50beca6e1074ed0c7285c50e46020310</hash>
      </entry>
      <entry>
         <file>mcc_generated_files\interrupt_manager.c</file>
         <hash>31ddd3a5ff93eb16503efb3e7a4600762519011a30010a6d445e98cdeec22db1</hash>
      </entry>
   </generatedFileHashHistoryMap>
</config>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  <?xml version="1.0" encoding="UTF-8"?>
<!--
     Recommended way to edit .jfc files is to use the configure command of
     the 'jfr' tool, i.e. jfr configure, or JDK Mission Control
     see Window -> Flight Recorder Template Manager
-->

<configuration version="2.0" label="Profiling" description="Low overhead configuration for profiling, typically around 2 % overhead." provider="Oracle">

    <event name="jdk.ThreadAllocationStatistics">
      <setting name="enabled">true</setting>
      <setting name="period">everyChunk</setting>
    </event>

    <event name="jdk.ClassLoadingStatistics">
      <setting name="enabled">true</setting>
      <setting name="period">1000 ms</setting>
    </event>

    <event name="jdk.ClassLoaderStatistics">
      <setting name="enabled">true</setting>
      <setting name="period">everyChunk</setting>
    </event>

    <event name="jdk.JavaThreadStatistics">
      <setting name="enabled">true</setting>
      <setting name="period">1000 ms</setting>
    </event>

    <event name="jdk.SymbolTableStatistics">
      <setting name="enabled">true</setting>
      <setting name="period">10 s</setting>
    </event>

    <event name="jdk.StringTableStatistics">
      <setting name="enabled">true</setting>
      <setting name="period">10 s</setting>
    </event>

    <event name="jdk.PlaceholderTableStatistics">
      <setting name="enabled">true</setting>
      <setting name="period">10 s</setting>
    </event>

    <event name="jdk.LoaderConstraintsTableStatistics">
      <setting name="enabled">true</setting>
      <setting name="period">10 s</setting>
    </event>

    <event name="jdk.ProtectionDomainCacheTableStatistics">
      <setting name="enabled">true</setting>
      <setting name="period">10 s</setting>
    </event>

    <event name="jdk.ThreadStart">
      <setting name="enabled">true</setting>
      <setting name="stackTrace">true</setting>
    </event>

    <event name="jdk.ThreadEnd">
      <setting name="enabled">true</setting>
    </event>

    <event name="jdk.ThreadSleep">
      <setting name="enabled">true</setting>
      <setting name="stackTrace">true</setting>
      <setting name="threshold" control="locking-threshold">10 ms</setting>
    </event>

    <event name="jdk.ThreadPark">
      <setting name="enabled">true</setting>
      <setting name="stackTrace">true</setting>
      <setting name="threshold" control="locking-threshold">10 ms</setting>
    </event>

    <event name="jdk.JavaMonitorEnter">
      <setting name="enabled">true</setting>
      <setting name="stackTrace">true</setting>
      <setting name="threshold" control="locking-threshold">10 ms</setting>
    </event>

    <event name="jdk.JavaMonitorWait">
      <setting name="enabled">true</setting>
      <setting name="stackTrace">true</setting>
      <setting name="threshold" control="locking-threshold">10 ms</setting>
    </event>

    <event name="jdk.JavaMonitorInflate">
      <setting name="enabled">true</setting>
      <setting name="stackTrace">true</setting>
      <setting name="threshold" control="locking-threshold">10 ms</setting>
    </event>

    <event name="jdk.SyncOnValueBasedClass">
      <setting name="enabled">true</setting>
      <setting name="stackTrace">true</setting>
    </event>

    <event name="jdk.BiasedLockRevocation">
      <setting name="enabled">true</setting>
      <setting name="stackTrace">true</setting>
      <setting name="threshold">0 ms</setting>
    </event>

    <event name="jdk.BiasedLockSelfRevocation">
      <setting name="enabled">true</setting>
      <setting name="stackTrace">true</setting>
      <setting name="threshold">0 ms</setting>
    </event>

    <event name="jdk.BiasedLockClassRevocation">
      <setting name="enabled">true</setting>
      <setting name="stackTrace">true</setting>
      <setting name="threshold">0 ms</setting>
    </event>

    <event name="jdk.ReservedStackActivation">
      <setting name="enabled">true</setting>
      <setting name="stackTrace">true</setting>
    </event>

    <event name="j