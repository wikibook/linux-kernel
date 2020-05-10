* 3.1.2

   ; patch_source_file/linux/kernel/irq/proc.c (1부: 83페이지)
      rpi_get_interrupt_info() 함수가 추가된 소스 코드

   ; rpi_get_interrupt_info_callstack_ftrace_log.c (1부: 87/88페이지)
      rpi_get_interrupt_info() 함수의 콜 스택이 포함된 ftrace 로그

   ; bcm2835_mmc_irq_callstack_ftrace_log.c (1부: 90페이지)
      bcm2835_mmc_irq() 함수의 콜 스택이 포함된 ftrace 로그

   ; irq_trace_ftrace.sh (1부: 87 페이지)
      ftrace를 설정하기 위한 셸 스크립트 파일

   ; get_ftrace.sh  
      ftrace 로그를 추출하는 셸 스크립트 파일

* 3.4.4

   ; get_ftrace.sh (1부: 113 페이지)
      ftrace 로그를 추출하는 셸 스크립트 파일

* 3.6

   ; patch_source_file/linux/drivers/soc/bcm (1부: 122페이지)
      rpi_debugfs.c: 소스 파일
      Makefile: rpi_debugfs.c 소스 파일을 빌드하기 위한 메이크 파일

   ; patch_source_file/linux/kernel/irq/handle.c (1부: 125페이지)
     raspbian_debug_state 전역 변수를 활용한 패치 코드
