* 9.2.1

   ; patch_source_file/linux/kernel/exit.c (2부: 113페이지)
      do_exit() 함수에 패치 코드를 추가한 소스 파일

   ; 9.2.1.race_do_exit_debug.patch (2부: 113페이지)
      패치 파일(소스 코드의 차이점을 표시)

   ; race_do_exit.sh (2부: 117페이지)
      ftrace를 설정하기 위한 셸 스크립트 파일

   ; No_race_condition_ftrace_log.c (2부: 119페이지)
      ftrace 로그 파일: 레이스 컨디션이 발생하지 않았을 때의 로그

   ; race_ftrace_log.c (2부: 120페이지)
      ftrace 로그 파일: 레이스 컨디션이 발생했을 때의 로그

   ; get_ftrace.sh  
      ftrace 로그를 추출하는 셸 스크립트 파일

* 9.2.2

   ; patch_source_file/linux/kernel/workqueue.c (2부: 125페이지)
      worker_thread() 함수에 패치 코드를 추가한 소스 파일

   ; 9.2.2.race_worker_thread_debug.patch (2부: 125페이지)
      패치 파일(소스 코드의 차이점을 표시)

   ; race_worker_thread.sh (2부: 129페이지)
      ftrace를 설정하기 위한 셸 스크립트 파일

   ; no_race_ftrace_log.c (2부: 130페이지)
      ftrace 로그 파일: 레이스 컨디션이 발생하지 않았을 때의 로그

   ; race_ftrace_log.c (2부: 130페이지)
      ftrace 로그 파일: 레이스 컨디션이 발생했을 때의 로그

   ; get_ftrace.sh  
      ftrace 로그를 추출하는 셸 스크립트 파일

* 9.2.3

   ; patch_source_file/linux/mm/slub.c (2부: 136~137페이지)
      __kmalloc() 함수에 패치 코드를 추가한 소스 파일

  ; patch_source_file/linux/drivers/soc/bcm
      rpi_debugfs 소스 파일: rpi_debugfs.c, Makefile

   ; 9.2.3.race_irq_kmalloc_debug.patch (2부: 136~137페이지)
      패치 파일(소스 코드의 차이점을 표시)

   ; race_irq_kmalloc.sh (2부: 142페이지)
      ftrace를 설정하기 위한 셸 스크립트 파일

   ; ftrace_log.c (2부: 143페이지)
      ftrace 로그 파일: 레이스 컨디션이 발생했을 때의 로그

   ; get_ftrace.sh  
      ftrace 로그를 추출하는 셸 스크립트 파일

* 9.6.1

   ; patch_source_file/linux/kernel/locking/spinlock.c (2부: 225~226페이지)
      _raw_spin_lock_irqsave()/_raw_spin_unlock_irqrestore() 함수에 패치 코드를 추가한 소스 파일

  ; patch_source_file/linux/drivers/soc/bcm
      rpi_debugfs 소스 파일: rpi_debugfs.c, Makefile

   ; 9.6.1.spinlock_debug.patch (2부: 225~226페이지)
      패치 파일(소스 코드의 차이점을 표시)

   ; rpi_spinlock_debug.sh (2부: 231페이지)
      ftrace를 설정하기 위한 셸 스크립트 파일

   ; ftrace_log.c (2부: 232페이지)
      ftrace 로그 파일: 레이스 컨디션이 발생했을 때의 로그

   ; get_ftrace.sh  
      ftrace 로그를 추출하는 셸 스크립트 파일

* 9.6.2

   ; patch_source_file/linux/kernel/locking/mutex.c (2부: 235페이지)
      mutex_lock()/mutex_unlock() 함수에 패치 코드를 추가한 소스 파일

  ; patch_source_file/linux/drivers/soc/bcm
      rpi_debugfs 소스 파일: rpi_debugfs.c, Makefile

   ; 9.6.2.mutex_debug.patch (2부: 235페이지)
      패치 파일(소스 코드의 차이점을 표시)

   ; rpi_mutex_debug.sh (2부: 241페이지)
      ftrace를 설정하기 위한 셸 스크립트 파일

   ; ftrace_log.c (2부: 242페이지)
      ftrace 로그 파일: 레이스 컨디션이 발생했을 때의 로그

   ; get_ftrace.sh  
      ftrace 로그를 추출하는 셸 스크립트 파일
