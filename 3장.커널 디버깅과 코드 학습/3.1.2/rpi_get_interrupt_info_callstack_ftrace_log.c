# tracer: function
#
# entries-in-buffer/entries-written: 1195/1195   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
             cat-884   [002] d...   333.875303: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2dc/0x3e0
             cat-884   [002] d...   333.875350: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2dc/0x3e0
 => seq_read+0x3d0/0x4b4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ea424c4
             cat-884   [002] d...   333.875361: rpi_get_interrupt_info+0x28/0x6c: [cat] 17: 3f00b880.mailbox, irq_handler: bcm2835_mbox_irq+0x0/0x94 
             cat-884   [002] d...   333.875374: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2dc/0x3e0
             cat-884   [002] d...   333.875393: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2dc/0x3e0
 => seq_read+0x3d0/0x4b4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ea424c4
             cat-884   [002] d...   333.875397: rpi_get_interrupt_info+0x28/0x6c: [cat] 18: VCHIQ doorbell, irq_handler: vchiq_doorbell_irq+0x0/0x48 
             cat-884   [002] d...   333.875427: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2dc/0x3e0
             cat-884   [002] d...   333.875445: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2dc/0x3e0
 => seq_read+0x3d0/0x4b4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ea424c4
             cat-884   [002] d...   333.875451: rpi_get_interrupt_info+0x28/0x6c: [cat] 40: bcm2708_fb dma, irq_handler: bcm2708_fb_dma_irq+0x0/0x44 
             cat-884   [002] d...   333.875464: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2dc/0x3e0
             cat-884   [002] d...   333.875482: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2dc/0x3e0
 => seq_read+0x3d0/0x4b4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ea424c4
             cat-884   [002] d...   333.875487: rpi_get_interrupt_info+0x28/0x6c: [cat] 42: DMA IRQ, irq_handler: bcm2835_dma_callback+0x0/0x140 
             cat-884   [002] d...   333.875499: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2dc/0x3e0
             cat-884   [002] d...   333.875517: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2dc/0x3e0
 => seq_read+0x3d0/0x4b4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ea424c4
             cat-884   [002] d...   333.875521: rpi_get_interrupt_info+0x28/0x6c: [cat] 44: DMA IRQ, irq_handler: bcm2835_dma_callback+0x0/0x140 
             cat-884   [002] d...   333.875532: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2dc/0x3e0
             cat-884   [002] d...   333.875550: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2dc/0x3e0
 => seq_read+0x3d0/0x4b4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ea424c4
             cat-884   [002] d...   333.875555: rpi_get_interrupt_info+0x28/0x6c: [cat] 45: DMA IRQ, irq_handler: bcm2835_dma_callback+0x0/0x140 
             cat-884   [002] d...   333.875574: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2dc/0x3e0
             cat-884   [002] d...   333.875592: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2dc/0x3e0
 => seq_read+0x3d0/0x4b4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ea424c4
             cat-884   [002] d...   333.875597: rpi_get_interrupt_info+0x28/0x6c: [cat] 56: dwc_otg, irq_handler: dwc_otg_common_irq+0x0/0x28 
             cat-884   [002] d...   333.875629: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2dc/0x3e0
             cat-884   [002] d...   333.875651: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2dc/0x3e0
 => seq_read+0x3d0/0x4b4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ea424c4
             cat-884   [002] d...   333.875656: rpi_get_interrupt_info+0x28/0x6c: [cat] 80: mmc0, irq_handler: bcm2835_sdhost_irq+0x0/0x3e8 
             cat-884   [002] d...   333.875667: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2dc/0x3e0
             cat-884   [002] d...   333.875686: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2dc/0x3e0
 => seq_read+0x3d0/0x4b4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ea424c4
             cat-884   [002] d...   333.875691: rpi_get_interrupt_info+0x28/0x6c: [cat] 81: uart-pl011, irq_handler: pl011_int+0x0/0x474 
             cat-884   [002] d...   333.875706: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2dc/0x3e0
             cat-884   [002] d...   333.875724: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2dc/0x3e0
 => seq_read+0x3d0/0x4b4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ea424c4
             cat-884   [002] d...   333.875730: rpi_get_interrupt_info+0x28/0x6c: [cat] 86: mmc1, irq_handler: bcm2835_mmc_irq+0x0/0x754 
             cat-884   [002] d...   333.875793: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2dc/0x3e0
             cat-884   [002] d...   333.875811: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2dc/0x3e0
 => seq_read+0x3d0/0x4b4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ea424c4
             cat-884   [002] d...   333.875815: rpi_get_interrupt_info+0x28/0x6c: [cat] 161: arch_timer, irq_handler: arch_timer_handler_phys+0x0/0x48 
             cat-884   [002] d...   333.875827: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2dc/0x3e0
             cat-884   [002] d...   333.875845: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2dc/0x3e0
 => seq_read+0x3d0/0x4b4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ea424c4
             cat-884   [002] d...   333.875849: rpi_get_interrupt_info+0x28/0x6c: [cat] 162: arch_timer, irq_handler: arch_timer_handler_phys+0x0/0x48 
             cat-884   [002] d...   333.875865: rpi_get_interrupt_info+0x14/0x6c <-show_interrupts+0x2dc/0x3e0
             cat-884   [002] d...   333.875883: <stack trace>
 => rpi_get_interrupt_info+0x18/0x6c
 => show_interrupts+0x2dc/0x3e0
 => seq_read+0x3d0/0x4b4
 => proc_reg_read+0x70/0x98
 => __vfs_read+0x48/0x168
 => vfs_read+0x9c/0x164
 => ksys_read+0x5c/0xbc
 => sys_read+0x18/0x1c
 => ret_fast_syscall+0x0/0x28
 => 0x7ea424c4
             cat-884   [002] d...   333.875887: rpi_get_interrupt_info+0x28/0x6c: [cat] 165: arm-pmu, irq_handler: armpmu_dispatch_irq+0x0/0x88 
          <idle>-0     [000] d...   333.876036: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
          <idle>-0     [003] d...   333.876077: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
          <idle>-0     [001] d...   333.876097: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
    kworker/u8:2-97    [000] d...   333.876103: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:0-7     [003] d...   333.876103: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   333.876115: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
          <idle>-0     [000] d...   333.876141: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:0-7     [003] d...   333.876147: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-97    [000] d...   333.876163: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   333.876174: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
          <idle>-0     [000] d...   333.876189: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:0-7     [003] d...   333.876190: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-97    [000] d...   333.876197: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
      lxterminal-836   [001] d...   333.876280: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
             cat-884   [002] d...   333.876759: sched_switch: prev_comm=cat prev_pid=884 prev_prio=120 prev_state=Z ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...   333.876768: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=855 next_prio=120
            bash-855   [000] d...   333.877325: sched_switch: prev_comm=bash prev_pid=855 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [000] d...   333.877349: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=855 next_prio=120
          <idle>-0     [001] d...   333.877356: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            bash-855   [000] d...   333.877551: sched_switch: prev_comm=bash prev_pid=855 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
      lxterminal-836   [001] d...   333.877567: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   333.881514: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
          <idle>-0     [000] d...   333.882697: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
          <idle>-0     [002] d...   333.882733: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=63 next_prio=120
          <idle>-0     [003] d...   333.882745: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/0:2-164   [000] d...   333.882753: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/2:2-63    [002] d...   333.882757: sched_switch: prev_comm=kworker/2:2 prev_pid=63 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/3:1-876   [003] d...   333.882768: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
      lxterminal-836   [001] d...   333.886511: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [001] d...   333.888146: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   333.888380: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   333.892685: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   333.892718: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   333.897303: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   333.901620: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   333.901664: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   333.901706: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   333.902124: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [001] d...   333.912707: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
          <idle>-0     [003] d...   333.912743: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   333.912807: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
      lxterminal-836   [001] d...   333.912929: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
          <idle>-0     [003] d...   333.932767: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   333.932834: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            Xorg-527   [001] d...   333.942990: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   333.943237: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
          <idle>-0     [003] d...   333.952753: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   333.952868: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            Xorg-527   [001] d...   333.965882: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   333.972716: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   333.972741: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   333.995784: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
          <idle>-0     [000] d...   333.995864: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=InputThread next_pid=578 next_prio=120
            rngd-353   [001] d...   333.995868: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   333.995885: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=335 next_prio=120
     InputThread-578   [000] d...   333.996026: sched_switch: prev_comm=InputThread prev_pid=578 prev_prio=120 prev_state=S ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   333.996040: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
             thd-335   [001] d...   333.996084: sched_switch: prev_comm=thd prev_pid=335 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
     kworker/0:2-164   [000] d...   333.996086: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   333.996099: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [001] d...   333.996284: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   333.996834: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [001] d...   333.996932: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   334.002690: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   334.002767: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.003730: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   334.003747: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   334.005150: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   334.005165: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.101709: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   334.101754: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.205460: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   334.205479: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.307707: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   334.307715: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...   334.312634: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=63 next_prio=120
     kworker/2:2-63    [002] d...   334.312673: sched_switch: prev_comm=kworker/2:2 prev_pid=63 prev_prio=120 prev_state=D ==> next_comm=ksoftirqd/2 next_pid=21 next_prio=120
     ksoftirqd/2-21    [002] d...   334.312688: sched_switch: prev_comm=ksoftirqd/2 prev_pid=21 prev_prio=120 prev_state=S ==> next_comm=kworker/2:1 next_pid=33 next_prio=120
     kworker/2:1-33    [002] d...   334.312694: sched_switch: prev_comm=kworker/2:1 prev_pid=33 prev_prio=120 prev_state=I ==> next_comm=kworker/2:2 next_pid=63 next_prio=120
     kworker/2:2-63    [002] d...   334.312735: sched_switch: prev_comm=kworker/2:2 prev_pid=63 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.368256: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [001] d...   334.368286: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   334.392621: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   334.392642: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   334.392648: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   334.392656: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.405707: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   334.405726: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.423837: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [001] d...   334.423918: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.509459: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   334.509469: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.611706: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   334.611714: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.709714: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   334.709746: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=D ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   334.709770: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.711057: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   334.711085: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...   334.712658: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=63 next_prio=120
     kworker/2:2-63    [002] d...   334.712702: sched_switch: prev_comm=kworker/2:2 prev_pid=63 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   334.712767: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=63 next_prio=120
     kworker/2:2-63    [002] d...   334.712797: sched_switch: prev_comm=kworker/2:2 prev_pid=63 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   334.712853: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=63 next_prio=120
     kworker/2:2-63    [002] d...   334.712878: sched_switch: prev_comm=kworker/2:2 prev_pid=63 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   334.712932: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=63 next_prio=120
     kworker/2:2-63    [002] d...   334.712958: sched_switch: prev_comm=kworker/2:2 prev_pid=63 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   334.713011: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=63 next_prio=120
     kworker/2:2-63    [002] d...   334.713025: sched_switch: prev_comm=kworker/2:2 prev_pid=63 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.795474: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   334.795514: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.893736: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   334.893755: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   334.893794: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   334.947661: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=691 next_prio=120
           gmain-691   [003] d...   334.947783: sched_switch: prev_comm=gmain prev_pid=691 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   334.997484: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   334.997502: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   334.997568: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   335.002663: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   335.002704: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.024537: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [001] d...   335.024607: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.058665: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [001] d...   335.060546: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [001] d...   335.060698: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [001] d...   335.062102: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
          <idle>-0     [003] d...   335.062750: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
            Xorg-527   [001] d...   335.062751: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
       rcu_sched-10    [003] d...   335.062773: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   335.082667: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   335.082691: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.099748: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   335.099773: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   335.099856: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   335.102653: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   335.102668: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   335.192640: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
          <idle>-0     [001] d...   335.192670: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   335.192721: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-97    [000] d...   335.193235: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:1H next_pid=73 next_prio=100
    kworker/0:1H-73    [000] d...   335.193361: sched_switch: prev_comm=kworker/0:1H prev_pid=73 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   335.193380: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [000] d...   335.193435: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.203488: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   335.203508: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   335.203581: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   335.284310: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-logind next_pid=330 next_prio=120
          <idle>-0     [000] d...   335.284314: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-udevd next_pid=137 next_prio=120
          <idle>-0     [001] d...   335.284558: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd next_pid=1 next_prio=120
   systemd-udevd-137   [000] d...   335.284638: sched_switch: prev_comm=systemd-udevd prev_pid=137 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
  systemd-logind-330   [003] d...   335.284673: sched_switch: prev_comm=systemd-logind prev_pid=330 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
         systemd-1     [001] d...   335.285256: sched_switch: prev_comm=systemd prev_pid=1 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   335.292682: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
          <idle>-0     [000] d...   335.292686: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
       rcu_sched-10    [003] d...   335.292701: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.292722: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/0:2-164   [000] d...   335.292724: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:0-17    [001] d...   335.292741: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.301593: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   335.301613: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   335.312659: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   335.312683: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   335.312721: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   335.332645: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   335.332706: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   335.352694: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=63 next_prio=120
     kworker/2:2-63    [002] d...   335.352716: sched_switch: prev_comm=kworker/2:2 prev_pid=63 prev_prio=120 prev_state=D ==> next_comm=kworker/2:1 next_pid=33 next_prio=120
     kworker/2:1-33    [002] d...   335.352733: sched_switch: prev_comm=kworker/2:1 prev_pid=33 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.405481: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   335.405572: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   335.502670: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   335.502741: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.507473: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   335.507485: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.605605: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   335.605618: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   335.605685: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.611766: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   335.611783: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.611800: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=335 next_prio=120
          <idle>-0     [000] d...   335.611852: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   335.611871: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   335.611895: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=InputThread next_pid=578 next_prio=120
             thd-335   [001] d...   335.611929: sched_switch: prev_comm=thd prev_pid=335 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.612049: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
     InputThread-578   [000] d...   335.612059: sched_switch: prev_comm=InputThread prev_pid=578 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
            Xorg-527   [001] d...   335.612526: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
          <idle>-0     [000] d...   335.613190: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [000] d...   335.613228: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=855 next_prio=120
            bash-855   [000] d...   335.613343: sched_switch: prev_comm=bash prev_pid=855 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [000] d...   335.613359: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=855 next_prio=120
            bash-855   [000] d...   335.613437: sched_switch: prev_comm=bash prev_pid=855 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
      lxterminal-836   [001] d...   335.613470: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.613678: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   335.613790: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
      lxterminal-836   [001] d...   335.613829: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
         openbox-714   [000] d...   335.613922: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [000] d...   335.614100: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   335.614184: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   335.614280: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   335.614370: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   335.614482: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.623862: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   335.624058: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   335.625157: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [000] d...   335.625234: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.639112: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
          <idle>-0     [000] d...   335.639807: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
      lxterminal-836   [001] d...   335.639865: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
            Xorg-527   [000] d...   335.640163: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.669919: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   335.670051: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.699781: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   335.699804: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.699821: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=335 next_prio=120
          <idle>-0     [000] d...   335.699868: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   335.699889: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   335.699920: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=InputThread next_pid=578 next_prio=120
             thd-335   [001] d...   335.700008: sched_switch: prev_comm=thd prev_pid=335 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
     InputThread-578   [000] d...   335.700077: sched_switch: prev_comm=InputThread prev_pid=578 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
          <idle>-0     [001] d...   335.700259: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   335.700310: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
      lxterminal-836   [001] d...   335.700654: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.709501: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   335.709538: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   335.709632: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   335.761990: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1H next_pid=73 next_prio=100
    kworker/0:1H-73    [000] d...   335.762039: sched_switch: prev_comm=kworker/0:1H prev_pid=73 prev_prio=100 prev_state=D ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   335.762063: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:1H next_pid=73 next_prio=100
    kworker/0:1H-73    [000] d...   335.762158: sched_switch: prev_comm=kworker/0:1H prev_pid=73 prev_prio=100 prev_state=I ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
          <idle>-0     [002] d...   335.762164: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=63 next_prio=120
     ksoftirqd/0-9     [000] d...   335.762167: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/2:2-63    [002] d...   335.762210: sched_switch: prev_comm=kworker/2:2 prev_pid=63 prev_prio=120 prev_state=D ==> next_comm=ksoftirqd/2 next_pid=21 next_prio=120
     ksoftirqd/2-21    [002] d...   335.762234: sched_switch: prev_comm=ksoftirqd/2 prev_pid=21 prev_prio=120 prev_state=S ==> next_comm=kworker/2:1 next_pid=33 next_prio=120
     kworker/2:1-33    [002] d...   335.762242: sched_switch: prev_comm=kworker/2:1 prev_pid=33 prev_prio=120 prev_state=I ==> next_comm=kworker/2:2 next_pid=63 next_prio=120
     kworker/0:2-164   [000] d...   335.762244: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/2:2-63    [002] d...   335.762313: sched_switch: prev_comm=kworker/2:2 prev_pid=63 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.803768: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   335.803813: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.803829: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=335 next_prio=120
          <idle>-0     [000] d...   335.803840: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   335.803853: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   335.803876: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=InputThread next_pid=578 next_prio=120
             thd-335   [001] d...   335.803969: sched_switch: prev_comm=thd prev_pid=335 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
     InputThread-578   [000] d...   335.804016: sched_switch: prev_comm=InputThread prev_pid=578 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
          <idle>-0     [001] d...   335.804457: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   335.804508: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   335.805016: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [000] d...   335.805058: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=855 next_prio=120
            bash-855   [000] d...   335.805176: sched_switch: prev_comm=bash prev_pid=855 prev_prio=120 prev_state=R+ ==> next_comm=Xorg next_pid=527 next_prio=120
      lxterminal-836   [001] d...   335.805263: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.805301: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   335.805392: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
      lxterminal-836   [001] d...   335.805453: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
         openbox-714   [000] d...   335.805614: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=lxpanel next_pid=720 next_prio=120
          <idle>-0     [001] d...   335.805736: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   335.805807: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=bash next_pid=855 next_prio=120
         lxpanel-720   [000] d...   335.805846: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            bash-855   [001] d...   335.805878: sched_switch: prev_comm=bash prev_pid=855 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [001] d...   335.805906: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   335.805939: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
      lxterminal-836   [001] d...   335.806035: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
         openbox-714   [000] d...   335.806044: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   335.806142: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   335.806263: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.816090: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   335.816120: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   335.816408: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.831368: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
          <idle>-0     [000] d...   335.832104: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
      lxterminal-836   [001] d...   335.832158: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
            Xorg-527   [000] d...   335.832479: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.862210: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   335.862372: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.884864: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=345 next_prio=120
  wpa_supplicant-345   [001] d...   335.884932: sched_switch: prev_comm=wpa_supplicant prev_pid=345 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.909604: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   335.909657: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.955789: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   335.955837: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=thd next_pid=335 next_prio=120
          <idle>-0     [000] d...   335.955869: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   335.955899: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   335.955917: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=InputThread next_pid=578 next_prio=120
             thd-335   [001] d...   335.955960: sched_switch: prev_comm=thd prev_pid=335 prev_prio=120 prev_state=S ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   335.956064: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
     InputThread-578   [000] d...   335.956092: sched_switch: prev_comm=InputThread prev_pid=578 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
          <idle>-0     [001] d...   335.956273: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   335.956690: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   335.957218: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
      lxterminal-836   [001] d...   335.957243: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [001] d...   335.957289: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=855 next_prio=120
            Xorg-527   [000] d...   335.957415: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
            bash-855   [001] d...   335.957444: sched_switch: prev_comm=bash prev_pid=855 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [001] d...   335.957464: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=lxterminal next_pid=836 next_prio=120
         openbox-714   [000] d...   335.957643: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=lxpanel next_pid=720 next_prio=120
      lxterminal-836   [001] d...   335.957746: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
         lxpanel-720   [000] d...   335.957860: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   335.957955: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   335.958056: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   335.958147: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   335.958267: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.967730: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   335.967916: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   335.982971: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
          <idle>-0     [000] d...   335.983678: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
      lxterminal-836   [001] d...   335.983739: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
            Xorg-527   [000] d...   335.984047: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...   335.991912: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=424 next_prio=120
  wpa_supplicant-424   [002] d...   335.992052: sched_switch: prev_comm=wpa_supplicant prev_pid=424 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.011735: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.011834: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.013786: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   336.013873: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.067786: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   336.067837: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=thd next_pid=335 next_prio=120
          <idle>-0     [000] d...   336.067853: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   336.067875: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   336.067900: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=InputThread next_pid=578 next_prio=120
             thd-335   [001] d...   336.067932: sched_switch: prev_comm=thd prev_pid=335 prev_prio=120 prev_state=S ==> next_comm=rngd next_pid=353 next_prio=120
     InputThread-578   [000] d...   336.068077: sched_switch: prev_comm=InputThread prev_pid=578 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            rngd-353   [001] d...   336.068088: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.068271: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   336.068300: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
      lxterminal-836   [001] d...   336.068676: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.115478: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.115532: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.131758: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.131771: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.131785: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=335 next_prio=120
          <idle>-0     [000] d...   336.131825: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   336.131842: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   336.131869: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=InputThread next_pid=578 next_prio=120
             thd-335   [001] d...   336.131953: sched_switch: prev_comm=thd prev_pid=335 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
     InputThread-578   [000] d...   336.131987: sched_switch: prev_comm=InputThread prev_pid=578 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
          <idle>-0     [001] d...   336.132403: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   336.132448: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
      lxterminal-836   [001] d...   336.133002: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [001] d...   336.133042: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=855 next_prio=120
            bash-855   [001] d...   336.133182: sched_switch: prev_comm=bash prev_pid=855 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [001] d...   336.133200: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=lxterminal next_pid=836 next_prio=120
          <idle>-0     [000] d...   336.133392: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
      lxterminal-836   [001] d...   336.133577: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.133621: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   336.133740: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
      lxterminal-836   [001] d...   336.133774: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
         openbox-714   [000] d...   336.133885: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [000] d...   336.134072: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   336.134160: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   336.134262: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   336.134351: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   336.134459: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.143807: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   336.143993: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.159049: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
          <idle>-0     [000] d...   336.159755: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
      lxterminal-836   [001] d...   336.159805: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
            Xorg-527   [000] d...   336.160122: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.189878: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   336.189914: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   336.190104: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.213730: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.213748: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   336.226172: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [000] d...   336.226320: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.307782: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   336.307805: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.307827: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=335 next_prio=120
          <idle>-0     [000] d...   336.307865: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   336.307885: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   336.307910: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=InputThread next_pid=578 next_prio=120
             thd-335   [001] d...   336.307954: sched_switch: prev_comm=thd prev_pid=335 prev_prio=120 prev_state=S ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.308032: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
     InputThread-578   [000] d...   336.308091: sched_switch: prev_comm=InputThread prev_pid=578 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
          <idle>-0     [001] d...   336.308280: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   336.308696: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
      lxterminal-836   [001] d...   336.309075: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [001] d...   336.309117: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=855 next_prio=120
            bash-855   [001] d...   336.309258: sched_switch: prev_comm=bash prev_pid=855 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [001] d...   336.309274: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=lxterminal next_pid=836 next_prio=120
          <idle>-0     [000] d...   336.309502: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
      lxterminal-836   [001] d...   336.309627: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.309670: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   336.309676: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
      lxterminal-836   [001] d...   336.309829: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
         lxpanel-720   [000] d...   336.309882: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   336.309971: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   336.310113: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   336.310189: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   336.310279: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   336.310366: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   336.310482: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.317494: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.317513: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.319845: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   336.320034: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.335093: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
          <idle>-0     [000] d...   336.335801: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
      lxterminal-836   [001] d...   336.335851: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
            Xorg-527   [000] d...   336.336165: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.355782: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.355809: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.355829: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=335 next_prio=120
          <idle>-0     [000] d...   336.355868: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   336.355889: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   336.355925: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=InputThread next_pid=578 next_prio=120
             thd-335   [001] d...   336.356004: sched_switch: prev_comm=thd prev_pid=335 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
     InputThread-578   [000] d...   336.356088: sched_switch: prev_comm=InputThread prev_pid=578 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
          <idle>-0     [001] d...   336.356268: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   336.356354: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
      lxterminal-836   [001] d...   336.356672: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.366731: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   336.366818: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.419745: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   336.419780: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.419882: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   336.472685: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   336.472789: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   336.472803: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   336.472827: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.517596: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.517657: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.523773: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   336.523804: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=thd next_pid=335 next_prio=120
          <idle>-0     [000] d...   336.523834: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   336.523854: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   336.523879: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=InputThread next_pid=578 next_prio=120
             thd-335   [001] d...   336.523890: sched_switch: prev_comm=thd prev_pid=335 prev_prio=120 prev_state=S ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.523975: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
     InputThread-578   [000] d...   336.524008: sched_switch: prev_comm=InputThread prev_pid=578 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
          <idle>-0     [001] d...   336.524445: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   336.524491: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
      lxterminal-836   [001] d...   336.525098: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [001] d...   336.525138: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=855 next_prio=120
            bash-855   [001] d...   336.525961: sched_switch: prev_comm=bash prev_pid=855 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [001] d...   336.525985: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=lxterminal next_pid=836 next_prio=120
          <idle>-0     [000] d...   336.526222: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
      lxterminal-836   [001] d...   336.526421: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.526451: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   336.526480: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
      lxterminal-836   [001] d...   336.526610: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
         lxpanel-720   [000] d...   336.526678: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   336.526729: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=R ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   336.526866: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   336.526973: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=R ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   336.527058: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   336.527107: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=R ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   336.527141: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   336.527168: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=R ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   336.527239: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   336.527317: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   336.532714: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   336.532741: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.536627: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   336.536842: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.551889: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
          <idle>-0     [003] d...   336.552699: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
          <idle>-0     [000] d...   336.552701: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
       rcu_sched-10    [003] d...   336.552724: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
      lxterminal-836   [001] d...   336.552760: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
            Xorg-527   [000] d...   336.553168: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   336.559733: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [000] d...   336.561625: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   336.561786: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [000] d...   336.563280: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   336.563947: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   336.572676: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   336.572702: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.582811: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   336.582951: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   336.592657: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   336.592677: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.611786: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.611839: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.611855: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=335 next_prio=120
          <idle>-0     [000] d...   336.611870: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   336.611894: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   336.611927: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=InputThread next_pid=578 next_prio=120
             thd-335   [001] d...   336.611997: sched_switch: prev_comm=thd prev_pid=335 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
     InputThread-578   [000] d...   336.612095: sched_switch: prev_comm=InputThread prev_pid=578 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
          <idle>-0     [001] d...   336.612293: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   336.612344: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   336.612657: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   336.612673: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
      lxterminal-836   [001] d...   336.612830: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.621484: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.621503: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   336.632671: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   336.632704: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   336.632784: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.723722: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.723787: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   336.752672: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   336.752690: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   336.792693: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=63 next_prio=120
     kworker/2:2-63    [002] d...   336.792759: sched_switch: prev_comm=kworker/2:2 prev_pid=63 prev_prio=120 prev_state=D ==> next_comm=kworker/2:1 next_pid=33 next_prio=120
     kworker/2:1-33    [002] d...   336.792818: sched_switch: prev_comm=kworker/2:1 prev_pid=33 prev_prio=120 prev_state=D ==> next_comm=kworker/2:3 next_pid=70 next_prio=120
     kworker/2:3-70    [002] d...   336.792863: sched_switch: prev_comm=kworker/2:3 prev_pid=70 prev_prio=120 prev_state=D ==> next_comm=ksoftirqd/2 next_pid=21 next_prio=120
          <idle>-0     [003] d...   336.792870: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kthreadd next_pid=2 next_prio=120
     ksoftirqd/2-21    [002] d...   336.792901: sched_switch: prev_comm=ksoftirqd/2 prev_pid=21 prev_prio=120 prev_state=S ==> next_comm=kworker/2:1 next_pid=33 next_prio=120
     kworker/2:1-33    [002] d...   336.792939: sched_switch: prev_comm=kworker/2:1 prev_pid=33 prev_prio=120 prev_state=D ==> next_comm=kworker/2:2 next_pid=63 next_prio=120
     kworker/2:2-63    [002] d...   336.793079: sched_switch: prev_comm=kworker/2:2 prev_pid=63 prev_prio=120 prev_state=I ==> next_comm=kthreadd next_pid=885 next_prio=120
        kthreadd-2     [003] d...   336.793097: sched_switch: prev_comm=kthreadd prev_pid=2 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     kworker/2:0-885   [002] d...   336.793099: sched_switch: prev_comm=kthreadd prev_pid=885 prev_prio=120 prev_state=R+ ==> next_comm=kworker/2:1 next_pid=33 next_prio=120
     kworker/2:1-33    [002] d...   336.793129: sched_switch: prev_comm=kworker/2:1 prev_pid=33 prev_prio=120 prev_state=D ==> next_comm=kthreadd next_pid=885 next_prio=120
     kworker/2:0-885   [002] d...   336.793143: sched_switch: prev_comm=kthreadd prev_pid=885 prev_prio=120 prev_state=D ==> next_comm=kworker/2:3 next_pid=70 next_prio=120
     kworker/2:3-70    [002] d...   336.793177: sched_switch: prev_comm=kworker/2:3 prev_pid=70 prev_prio=120 prev_state=I ==> next_comm=kworker/2:0 next_pid=885 next_prio=120
     kworker/2:0-885   [002] d...   336.793190: sched_switch: prev_comm=kworker/2:0 prev_pid=885 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=33 next_prio=120
     kworker/2:1-33    [002] d...   336.793216: sched_switch: prev_comm=kworker/2:1 prev_pid=33 prev_prio=120 prev_state=D ==> next_comm=kworker/2:0 next_pid=885 next_prio=120
     kworker/2:0-885   [002] d...   336.793251: sched_switch: prev_comm=kworker/2:0 prev_pid=885 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   336.793266: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=33 next_prio=120
     kworker/2:1-33    [002] d...   336.793280: sched_switch: prev_comm=kworker/2:1 prev_pid=33 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.805475: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.805489: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   336.826548: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [000] d...   336.826678: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   336.907733: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   336.907756: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   336.907864: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   337.005727: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   337.005767: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   337.024754: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   337.024777: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   337.024889: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   337.109594: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   337.109653: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   337.213488: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   337.213507: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   337.213573: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   337.315483: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   337.315501: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   337.315540: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   337.413722: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   337.413739: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   337.427293: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   337.427313: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [000] d...   337.427428: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   337.517478: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   337.517516: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   337.619730: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   337.619748: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   337.619788: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   337.723482: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   337.723500: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   337.723538: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   337.821595: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   337.821612: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...   337.832670: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=33 next_prio=120
     kworker/2:1-33    [002] d...   337.832719: sched_switch: prev_comm=kworker/2:1 prev_pid=33 prev_prio=120 prev_state=D ==> next_comm=ksoftirqd/2 next_pid=21 next_prio=120
     ksoftirqd/2-21    [002] d...   337.832741: sched_switch: prev_comm=ksoftirqd/2 prev_pid=21 prev_prio=120 prev_state=S ==> next_comm=kworker/2:1 next_pid=33 next_prio=120
     kworker/2:1-33    [002] d...   337.832770: sched_switch: prev_comm=kworker/2:1 prev_pid=33 prev_prio=120 prev_state=I ==> next_comm=kworker/2:0 next_pid=885 next_prio=120
     kworker/2:0-885   [002] d...   337.832818: sched_switch: prev_comm=kworker/2:0 prev_pid=885 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...   337.925474: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   337.925512: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   338.002666: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   338.002712: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   338.027593: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   338.027606: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   338.027988: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [000] d...   338.028045: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   338.060104: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [000] d...   338.062048: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   338.062227: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [000] d...   338.062754: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
          <idle>-0     [003] d...   338.062764: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
          <idle>-0     [002] d...   338.062793: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=885 next_prio=120
       rcu_sched-10    [003] d...   338.062794: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/0:2-164   [000] d...   338.062803: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=720 next_prio=120
     kworker/3:1-876   [003] d...   338.062838: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
     kworker/2:0-885   [002] d...   338.062853: sched_switch: prev_comm=kworker/2:0 prev_pid=885 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
         lxpanel-720   [000] d...   338.063830: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   338.064402: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   338.082682: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   338.082714: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   338.102663: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   338.102746: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   338.102765: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   338.102792: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   338.125736: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   338.125756: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   338.229605: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   338.229626: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   338.229721: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   338.331730: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   338.331749: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   338.331810: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   338.392674: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:2H next_pid=87 next_prio=100
    kworker/3:2H-87    [003] d...   338.392696: sched_switch: prev_comm=kworker/3:2H prev_pid=87 prev_prio=100 prev_state=I ==> next_comm=jbd2/mmcblk0p2- next_pid=75 next_prio=120
 jbd2/mmcblk0p2--75    [003] d...   338.392983: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=75 prev_prio=120 prev_state=R+ ==> next_comm=kworker/3:2H next_pid=87 next_prio=100
    kworker/3:2H-87    [003] d...   338.393107: sched_switch: prev_comm=kworker/3:2H prev_pid=87 prev_prio=100 prev_state=I ==> next_comm=jbd2/mmcblk0p2- next_pid=75 next_prio=120
 jbd2/mmcblk0p2--75    [003] d...   338.393119: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=75 prev_prio=120 prev_state=D ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   338.393176: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   338.435484: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   338.435502: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   338.435569: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   338.533722: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   338.533760: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   338.552670: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   338.552721: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=D ==> next_comm=kworker/3:3 next_pid=438 next_prio=120
     kworker/3:3-438   [003] d...   338.552747: sched_switch: prev_comm=kworker/3:3 prev_pid=438 prev_prio=120 prev_state=I ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   338.552813: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   338.579364: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   338.579381: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1H next_pid=73 next_prio=100
    kworker/0:1H-73    [000] d...   338.579421: sched_switch: prev_comm=kworker/0:1H prev_pid=73 prev_prio=100 prev_state=D ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   338.579464: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1H next_pid=73 next_prio=100
    kworker/0:1H-73    [000] d...   338.579488: sched_switch: prev_comm=kworker/0:1H prev_pid=73 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   338.579547: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   338.579552: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=jbd2/mmcblk0p2- next_pid=75 next_prio=120
 jbd2/mmcblk0p2--75    [003] d...   338.579632: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=75 prev_prio=120 prev_state=R+ ==> next_comm=kworker/3:2H next_pid=87 next_prio=100
    kworker/3:2H-87    [003] d...   338.579691: sched_switch: prev_comm=kworker/3:2H prev_pid=87 prev_prio=100 prev_state=I ==> next_comm=jbd2/mmcblk0p2- next_pid=75 next_prio=120
 jbd2/mmcblk0p2--75    [003] d...   338.579702: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=75 prev_prio=120 prev_state=D ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   338.579732: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   338.581851: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1H next_pid=73 next_prio=100
    kworker/0:1H-73    [000] d...   338.581880: sched_switch: prev_comm=kworker/0:1H prev_pid=73 prev_prio=100 prev_state=D ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   338.581892: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   338.581914: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:1H next_pid=73 next_prio=100
    kworker/0:1H-73    [000] d...   338.581932: sched_switch: prev_comm=kworker/0:1H prev_pid=73 prev_prio=100 prev_state=I ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   338.581946: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
          <idle>-0     [003] d...   338.581950: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=jbd2/mmcblk0p2- next_pid=75 next_prio=120
     ksoftirqd/0-9     [000] d...   338.581980: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
 jbd2/mmcblk0p2--75    [003] d...   338.582000: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=75 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   338.629398: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
          <idle>-0     [001] d...   338.629477: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   338.629516: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
         lxpanel-720   [000] d...   338.629551: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   338.731731: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   338.731752: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   338.731839: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   338.829725: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   338.829785: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...   338.872687: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=885 next_prio=120
     kworker/2:0-885   [002] d...   338.872727: sched_switch: prev_comm=kworker/2:0 prev_pid=885 prev_prio=120 prev_state=R+ ==> next_comm=ksoftirqd/2 next_pid=21 next_prio=120
     ksoftirqd/2-21    [002] d...   338.872746: sched_switch: prev_comm=ksoftirqd/2 prev_pid=21 prev_prio=120 prev_state=S ==> next_comm=kworker/2:0 next_pid=885 next_prio=120
     kworker/2:0-885   [002] d...   338.872809: sched_switch: prev_comm=kworker/2:0 prev_pid=885 prev_prio=120 prev_state=D ==> next_comm=kworker/2:1 next_pid=33 next_prio=120
     kworker/2:1-33    [002] d...   338.872895: sched_switch: prev_comm=kworker/2:1 prev_pid=33 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   338.872907: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=885 next_prio=120
     kworker/2:0-885   [002] d...   338.872945: sched_switch: prev_comm=kworker/2:0 prev_pid=885 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   338.873001: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=885 next_prio=120
     kworker/2:0-885   [002] d...   338.873028: sched_switch: prev_comm=kworker/2:0 prev_pid=885 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   338.873083: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=885 next_prio=120
     kworker/2:0-885   [002] d...   338.873110: sched_switch: prev_comm=kworker/2:0 prev_pid=885 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   338.873166: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=885 next_prio=120
     kworker/2:0-885   [002] d...   338.873180: sched_switch: prev_comm=kworker/2:0 prev_pid=885 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...   338.915722: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   338.915760: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   338.947773: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=691 next_prio=120
           gmain-691   [003] d...   338.947871: sched_switch: prev_comm=gmain prev_pid=691 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   338.952677: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=885 next_prio=120
     kworker/2:0-885   [002] d...   338.952741: sched_switch: prev_comm=kworker/2:0 prev_pid=885 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   339.002683: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=876 next_prio=120
     kworker/3:1-876   [003] d...   339.002732: sched_switch: prev_comm=kworker/3:1 prev_pid=876 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   339.019473: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   339.019486: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   339.117603: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   339.117621: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   339.117686: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   339.221484: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=17 next_prio=120
     kworker/1:0-17    [001] d...   339.221502: sched_switch: prev_comm=kworker/1:0 prev_pid=17 prev_prio=120 prev_state=I ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   339.221541: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   339.230154: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [000] d...   339.230254: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   339.243760: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=353 next_prio=120
            rngd-353   [001] d...   339.243773: sched_switch: prev_comm=rngd prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   339.243802: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=335 next_prio=120
          <idle>-0     [000] d...   339.243836: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   339.243861: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...   339.243876: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=InputThread next_pid=578 next_prio=120
             thd-335   [001] d...   339.243953: sched_switch: prev_comm=thd prev_pid=335 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
     InputThread-578   [000] d...   339.244061: sched_switch: prev_comm=InputThread prev_pid=578 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
          <idle>-0     [001] d...   339.244546: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxterminal next_pid=836 next_prio=120
            Xorg-527   [000] d...   339.244600: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
      lxterminal-836   [001] d...   339.245178: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [001] d...   339.245221: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=855 next_prio=120
          <idle>-0     [002] d...   339.246155: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=886 next_prio=120
            bash-855   [001] d...   339.246428: sched_switch: prev_comm=bash prev_pid=855 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [001] d...   339.246468: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=lxterminal next_pid=836 next_prio=120
          <idle>-0     [000] d...   339.246777: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=Xorg next_pid=527 next_prio=120
            Xorg-527   [000] d...   339.247066: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
      lxterminal-836   [001] d...   339.247171: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
         openbox-714   [000] d...   339.247234: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=lxpanel next_pid=720 next_prio=120
         lxpanel-720   [000] d...   339.247430: sched_switch: prev_comm=lxpanel prev_pid=720 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
            bash-886   [002] d...   339.247484: sched_switch: prev_comm=bash prev_pid=886 prev_prio=120 prev_state=D ==> next_comm=kworker/2:1H next_pid=72 next_prio=100
            Xorg-527   [000] d...   339.247527: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
    kworker/2:1H-72    [002] d...   339.247596: sched_switch: prev_comm=kworker/2:1H prev_pid=72 prev_prio=100 prev_state=I ==> next_comm=kworker/2:0 next_pid=885 next_prio=120
         openbox-714   [000] d...   339.247636: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=Xorg next_pid=527 next_prio=120
     kworker/2:0-885   [002] d...   339.247662: sched_switch: prev_comm=kworker/2:0 prev_pid=885 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
            Xorg-527   [000] d...   339.247728: sched_switch: prev_comm=Xorg prev_pid=527 prev_prio=120 prev_state=S ==> next_comm=openbox next_pid=714 next_prio=120
         openbox-714   [000] d...   339.247869: sched_switch: prev_comm=openbox prev_pid=714 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   339.248359: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=164 next_prio=120
     kworker/0:2-164   [000] d...   339.248377: sched_switch: prev_comm=kworker/0:2 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1H next_pid=73 next_prio=100
    kworker/0:1H-73    [000] d...   339.248438: sched_switch: prev_comm=kworker/0:1H prev_pid=73 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...   339.248442: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=886 next_prio=120
          <idle>-0     [003] d...   339.252815: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   339.252857: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   339.254626: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=97 next_prio=120
    kworker/u8:2-97    [001] d...   339.254674: sched_switch: prev_comm=kworker/u8:2 prev_pid=97 prev_prio=120 prev_state=I ==> next_comm=lxterminal next_pid=836 next_prio=120
      lxterminal-836   [001] d...   339.254944: sched_switch: prev_comm=lxterminal prev_pid=836 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
