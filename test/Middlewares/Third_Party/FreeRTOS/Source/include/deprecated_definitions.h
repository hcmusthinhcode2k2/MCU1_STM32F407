     <test name="gc" operator="equal" value="detailed"/>
          <test name="gc" operator="equal" value="high"/>
          <test name="gc" operator="equal" value="all"/>
       </or>
      </condition>

      <condition name="gc-enabled-high" true="true" false="false">
        <or>
          <test name="gc" operator="equal" value="high"/>
          <test name="gc" operator="equal" value="all"/>
        </or>
      </condition>

      <condition name="gc-enabled-all" true="true" false="false">
        <test name="gc" operator="equal" value="all"/>
      </condition>

      <selection name="allocation-profiling" default="medium" label="Allocation Profiling">
        <option label="Off" name="off">0/s</option>
        <option label="Low" name="low">150/s</option>
        <option label="Medium" name="medium">300/s</option>
	    <option label="High" name="high">1000/s</option>
        <option label="Maximum" name="maximum">1000000000/s</option>
      </selection>

      <condition name="object-allocation-enabled" true="true" false="false">
        <not>
          <test name="allocation-profiling" operator="equal" value="off"/>
        </not>
      </condition>

      <selection name="compiler" default="detailed" label="Compiler">
        <option label="Off" name="off">off</option>
        <option label="Normal" name="normal">normal</option>
        <option label="Detailed" name="detailed">detailed</option>
        <option label="All" name="all">all</option>
      </selection>

      <condition name="compiler-enabled" true="false" false="true">
        <test name="compiler" operator="equal" value="off"/>
      </condition>

      <condition name="compiler-enabled-failure" true="true" false="false">
        <or>
          <test name="compiler" operator="equal" value="detailed"/>
          <test name="compiler" operator="equal" value="all"/>
        </or>
      </condition>

      <condition name="compiler-sweeper-threshold" true="0 ms" false="100 ms">
        <test name="compiler" operator="equal" value="all"/>
      </condition>

      <condition name="compiler-compilation-threshold" true="1000 ms">
        <test name="compiler" operator="equal" value="normal"/>
      </condition>

      <condition name="compiler-compilation-threshold" true="100 ms">
        <test name="compiler" operator="equal" value="detailed"/>
      </condition>

      <condition name="compiler-compilation-threshold" true="0 ms">
        <test name="compiler" operator="equal" value="all"/>
      </condition>

      <condition name="compiler-phase-threshold" true="60 s">
        <test name="compiler" operator="equal" value="normal"/>
      </condition>

      <condition name="compiler-phase-threshold" true="10 s">
        <test name="compiler" operator="equal" value="detailed"/>
      </condition>

      <condition name="compiler-phase-threshold" true="0 s">
        <test name="compiler" operator="equal" value="all"/>
      </condition>

      <selection name="method-profiling" default="high" label="Method Profiling">
        <option label="Off" name="off">off</option>
        <option label="Normal" name="normal">normal</option>
        <option label="High" name="high">high</option>
        <option label="Maximum (High Overhead)" name="max">max</option>
      </selection>

      <condition name="method-sampling-java-interval" true="999 d">
        <test name="method-profiling" operator="equal" value="off"/>
      </condition>

      <condition name="method-sampling-java-interval" true="20 ms">
        <test name="method-profiling" operator="equal" value="normal"/>
      </condition>

      <condition name="method-sampling-java-interval" true="10 ms">
        <test name="method-profiling" operator="equal" value="high"/>
      </condition>

      <condition name="method-sampling-java-interval" true="1 ms">
        <test name="method-profiling" operator="equal" value="max"/>
      </condition>

      <condition name="method-sampling-native-interval" true="999 d">
        <test name="method-profiling" operator="equal" value="off"/>
      </condition>

      <condition name="method-sampling-native-interval" true="20 ms">
        <or>
          <test name="method-profiling" operator="equal" value="normal"/>
          <test name="method-profiling" operator="equal" value="high"/>
          <test name="method-profiling" operator="equal" value="max"/>
        </or>
      </condition>

      <condition name="method-sampling-enabled" true="false" false="true">
        <test name="method-profiling" operator="equal" value="off"/>
      </condition>

      <selection name="thread-dump" default="once" label="Thread Dump">
        <option label="Off" name="off">999 d</option>
        <option label="At least Once" name="once">everyChunk</option>
        <option label="Every 60 s" name="60s">60 s</option>
        <option label="Every 10 s" name="10s">10 s</option>
        <option label="Every 1 s" name="1s">1 s</option>
      </selection>

      <condition name="thread-dump-enabled" true="false" false="true">
        <test name="thread-dump" operator="equal" value="999 d"/>
      </condition>

      <selection name="exceptions" default="errors" label="Exceptions">
        <option label="Off" name="off">off</option>
        <option label="Errors Only" name="errors">errors</option>
        <option label="All Exceptions, including Errors" name="all">all</option>
      </selection>

      <condition name="enable-errors" true="true" false="false">
        <or>
          <test name="exceptions" operator="equal" value="errors"/>
          <test name="exceptions" operator="equal" value="all"/>
        </or>
      </condition>

      <condition name="enable-exceptions" true="true" false="false">
        <test name="exceptions" operator="equal" value="all"/>
      </condition>

      <selection name="memory-leaks" default="stack-traces" label="Memory Leak Detection">
        <option label="Off" name="off">off</option>
        <option label="Object Types" name="types">types</option>
        <option label="Object Types + Allocation Stack Traces" name="stack-traces">stack-traces</option>
        <option label="Object Types + Allocation Stack Traces + Path to GC Root" name="gc-roots">gc-roots</option>
      </selection>

      <condition name="old-objects-enabled" true="false" false="true">
        <test name="memory-leaks" operator="equal" value="off"/>
      </condition>

      <condition name="old-objects-stack-trace" true="true" false="false">
        <or>
          <test name="memory-leaks" operator="equal" value="stack-traces"/>
          <test name="memory-leaks" operator="equal" value="gc-roots"/>
        </or>
      </condition>

      <condition name="old-objects-cutoff" true="1 h" false="0 ns">
        <test name="memory-leaks" operator="equal" value="gc-roots"/>
      </condition>

      <text name="locking-threshold" label="Locking Threshold" contentType="timespan" minimum="0 s">10 ms</text>

      <text name="file-threshold" label="File I/O Threshold" contentType="timespan" minimum="0 s">10 ms</text>

      <text name="socket-threshold" label="Socket I/O Threshold" contentType="timespan" minimum="0 s">10 ms</text>

      <flag name="class-loading" label="Class Loading">false</flag>

    </control>

</configuration>
                                                                                                                                                                                                                                                                                