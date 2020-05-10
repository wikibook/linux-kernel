* 8.2.3

   ; patch_source_file/linux/kernel/time/timekeeping.c (2부: 14페이지)
      do_timer() 함수에 패치 코드를 추가한 소스 파일

   ; do_timer_jiffies_debug.patch (2부: 14페이지)
      패치 파일(소스 코드의 차이점을 표시)

   ; do_timer_debug.sh (2부: 15페이지)
      ftrace를 설정하기 위한 셸 스크립트 파일

   ; jiffies_ftrace_log.c (2부: 15페이지)
      ftrace 로그 파일: jiffies 값을 측정

   ; do_timers_callstack_ftrace_log.c (2부: 17페이지)
      ftrace 로그 파일: do_timer() 함수의 콜 스택

   ; get_ftrace.sh  
      ftrace 로그를 추출하는 셸 스크립트 파일	  
	  
* 8.7.1

   ; timer_ftrace_setting.sh (2부: 69페이지)
      ftrace를 설정하기 위한 셸 스크립트 파일

   ; ftrace_log.c (2부: 69페이지)
      ftrace 로그 파일

   ; get_ftrace.sh  
      ftrace 로그를 추출하는 셸 스크립트 파일

* 8.7.2

   ; patch_source_file/linux/drivers/usb/core/hcd.c (2부: 74페이지)
   ; patch_source_file/linux/kernel/softirq.c  
   ; patch_source_file/linux/kernel/time/timer.c  
      동적 타이머 실습 소스 파일

  ; patch_source_file/linux/drivers/soc/bcm
      rpi_debugfs 소스 파일: rpi_debugfs.c, Makefile

   ; dynamic_timer_debug.patch (2부: 74페이지)
      패치 파일(소스 코드의 차이점을 표시)

   ; timer_debug_raspbian.sh (2부: 82페이지)
      ftrace를 설정하기 위한 셸 스크립트 파일

   ; ftrace_log.c (2부: 84페이지)
      ftrace 로그 파일
 