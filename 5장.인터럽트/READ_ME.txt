* 5.2.2

   ; irq_stack_trace.sh (1부: 295페이지)
      ftrace를 설정하기 위한 셸 스크립트 파일

   ; ftrace_log.c (1부: 296페이지)
      ftrace 로그 파일

   ; get_ftrace.sh  
      ftrace 로그를 추출하는 셸 스크립트 파일

* 5.2.3

   ; patch_source_file/linux/mmc/host/bcm2835-sdhost.c (1부: 312페이지)
      bcm2835_sdhost_irq() 함수에 패치 코드를 추가한 소스 파일

   ; 5.2.3_in_interrupt.patch (1부: 312페이지)
      패치 파일(소스 코드의 차이점을 표시)

   ; kern.log (1부: 314페이지)
      커널 로그(/var/log/kern.log)

* 5.4.2/334_페이지_실습

   ; patch_source_file/linux/kernel/irq/manage.c (1부: 334페이지)
      request_threaded_irq() 함수에 패치 코드를 추가한 소스 파일

   ; 5_4_2_request_threaded_irq.patch (1부: 334페이지)
      패치 파일(소스 코드의 차이점을 표시)

   ; kern.log (1부: 337페이지)
      커널 로그(/var/log/kern.log)

* 5.4.2/339_페이지_실습
 
   ; patch_source_file/linux/drivers/usb/host/dwc_otg/dwc_otg_driver.c (1부: 339페이지)
     dwc_otg_driver_probe() 함수에 패치 코드[interrupt_debug_irq_desc() 함수]를 추가한 소스 파일 

   ; 5.4.2.interrupt_debug_irq_desc.patch (1부: 339~340페이지)
      패치 파일(소스 코드의 차이점을 표시)

   ; kern.log (1부: 342페이지)
      커널 로그(/var/log/kern.log)

* 5.5.2 
 
   ; patch_source_file/linux/drivers/mmc/host/bcm2835-mmc.c (1부: 353페이지)
      bcm2835_mmc_thread_irq() 함수에 패치 코드[interrupt_debug_irq_times() 함수]를 추가한 소스 파일 

   ; 5.5.2.interrupt_debug_irq_times.patch (1부: 353페이지)
      패치 파일(소스 코드의 차이점을 표시)

   ; kern.log (1부: 355페이지)
      커널 로그(/var/log/kern.log)

* 5.7.2

   ; irq_ftrace.sh (1부: 367페이지)
      ftrace를 설정하기 위한 셸 스크립트 파일

   ; ftrace_log.c (1부: 367페이지)
      ftrace 로그 파일

   ; get_ftrace.sh  
      ftrace 로그를 추출하는 셸 스크립트 파일

* 5.7.3

   ; patch_source_file/linux/kernel/irq/handle.c (1부: 372페이지)
      __handle_irq_event_percpu() 함수에 패치 코드를 추가한 소스 파일 

   ; irq_ftrace.sh (1부: 367페이지)
      ftrace를 설정하기 위한 셸 스크립트 파일

   ; ftrace_log.c (1부: 372페이지)
      ftrace 로그 파일

   ; get_ftrace.sh  
      ftrace 로그를 추출하는 셸 스크립트 파일
