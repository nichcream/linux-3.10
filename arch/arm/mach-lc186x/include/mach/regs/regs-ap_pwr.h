#ifndef __ASM_ARCH_REGS_AP_PWR_H
#define __ASM_ARCH_REGS_AP_PWR_H

#define AP_PWR_SLPCTL0					(AP_PWR_BASE + (0x000))
#define AP_PWR_SLPCTL1					(AP_PWR_BASE + (0x004))
#define AP_PWR_SLPCNT_LIMIT				(AP_PWR_BASE + (0x008))
#define AP_PWR_SLPST					(AP_PWR_BASE + (0x00c))
#define AP_PWR_PLLCR					(AP_PWR_BASE + (0x010))
#define AP_PWR_PLL0CFG_CTL0				(AP_PWR_BASE + (0x030))
#define AP_PWR_PLL1CFG_CTL0				(AP_PWR_BASE + (0x034))
#define AP_PWR_PLL1MCLK_CTL				(AP_PWR_BASE + (0x038))
#define AP_PWR_PLL0_F_UPD_CTL				(AP_PWR_BASE + (0x03c))
#define AP_PWR_HA7_CLK_CTL				(AP_PWR_BASE + (0x040))
#define AP_PWR_PLL0CFG_CTL1				(AP_PWR_BASE + (0x044))
#define AP_PWR_PLL1CFG_CTL1				(AP_PWR_BASE + (0x048))
#define AP_PWR_BUSMCLK0_CTL				(AP_PWR_BASE + (0x04c))
#define AP_PWR_BUSMCLK1_CTL				(AP_PWR_BASE + (0x050))
#define AP_PWR_CTLPCLK_CTL				(AP_PWR_BASE + (0x054))
#define AP_PWR_DATAPCLK_CTL				(AP_PWR_BASE + (0x058))
#define AP_PWR_SECPCLK_CTL				(AP_PWR_BASE + (0x05c))
#define AP_PWR_CLK_EN0					(AP_PWR_BASE + (0x060))
#define AP_PWR_CLK_EN1					(AP_PWR_BASE + (0x064))
#define AP_PWR_CLK_EN2					(AP_PWR_BASE + (0x068))
#define AP_PWR_CLK_EN3					(AP_PWR_BASE + (0x06c))
#define AP_PWR_CLK_EN4					(AP_PWR_BASE + (0x070))
#define AP_PWR_CLK_EN5					(AP_PWR_BASE + (0x074))
#define AP_PWR_CTLPCLK_EN				(AP_PWR_BASE + (0x080))
#define AP_PWR_DATAPCLK_EN				(AP_PWR_BASE + (0x084))
#define AP_PWR_SECPCLK_EN				(AP_PWR_BASE + (0x088))
#define AP_PWR_SA7CLK_CTL0				(AP_PWR_BASE + (0x090))
#define AP_PWR_SA7CLK_CTL1				(AP_PWR_BASE + (0x094))
#define AP_PWR_GPUCLK_CTL				(AP_PWR_BASE + (0x09c))
#define AP_PWR_ON2CLK_CTL0				(AP_PWR_BASE + (0x0a4))
#define AP_PWR_ON2CLK_CTL1				(AP_PWR_BASE + (0x0a8))
#define AP_PWR_ACC2DMCLK_CTL				(AP_PWR_BASE + (0x0b0))
#define AP_PWR_NFCCLK_CTL				(AP_PWR_BASE + (0x0b4))
#define AP_PWR_HPICLK_CTL				(AP_PWR_BASE + (0x0b8))
#define AP_PWR_USBCLKDIV_CTL				(AP_PWR_BASE + (0x0bc))
#define AP_PWR_LCDCAXICLK_CTL				(AP_PWR_BASE + (0x0c0))
#define AP_PWR_LCDC0CLK_CTL				(AP_PWR_BASE + (0x0c4))
#define AP_PWR_LCDC1CLK_CTL				(AP_PWR_BASE + (0x0c8))
#define AP_PWR_DISCLK_CTL_EN				(AP_PWR_BASE + (0x0d0))
#define AP_PWR_ISPCLK_CTL0				(AP_PWR_BASE + (0x0d4))
#define AP_PWR_ISPCLK_CTL1				(AP_PWR_BASE + (0x0d8))
#define AP_PWR_CTLAPBMCLK_EN				(AP_PWR_BASE + (0x0ec))
#define AP_PWR_TIMER0CLKCTL				(AP_PWR_BASE + (0x0f0))
#define AP_PWR_TIMER1CLKCTL				(AP_PWR_BASE + (0x0f4))
#define AP_PWR_TIMER2CLKCTL				(AP_PWR_BASE + (0x0f8))
#define AP_PWR_TIMER3CLKCTL				(AP_PWR_BASE + (0x0fc))
#define AP_PWR_TIMER4CLKCTL				(AP_PWR_BASE + (0x100))
#define AP_PWR_TIMER5CLKCTL				(AP_PWR_BASE + (0x104))
#define AP_PWR_TIMER6CLKCTL				(AP_PWR_BASE + (0x108))
#define AP_PWR_TIMER7CLKCTL				(AP_PWR_BASE + (0x10c))
#define AP_PWR_PWMCLKDIV_CTL				(AP_PWR_BASE + (0x110))
#define AP_PWR_I2SCLK_CTL0				(AP_PWR_BASE + (0x114))
#define AP_PWR_I2SCLK_CTL1				(AP_PWR_BASE + (0x118))
#define AP_PWR_SSICLK_CTL0				(AP_PWR_BASE + (0x120))
#define AP_PWR_SSICLKDIV_CTL				(AP_PWR_BASE + (0x124))
#define AP_PWR_UARTCLK_CTL0				(AP_PWR_BASE + (0x130))
#define AP_PWR_UART0CLK_CTL1				(AP_PWR_BASE + (0x134))
#define AP_PWR_UART1CLK_CTL1				(AP_PWR_BASE + (0x138))
#define AP_PWR_UART2CLK_CTL1				(AP_PWR_BASE + (0x13c))
#define AP_PWR_I2CCLK_CTL				(AP_PWR_BASE + (0x140))
#define AP_PWR_SECAPBMCLK_EN				(AP_PWR_BASE + (0x144))
#define AP_PWR_SDMMCCLK_CTL0				(AP_PWR_BASE + (0x148))
#define AP_PWR_SDMMC0CLK_CTL1				(AP_PWR_BASE + (0x14c))
#define AP_PWR_SDMMC1CLK_CTL1				(AP_PWR_BASE + (0x150))
#define AP_PWR_SDMMC2CLK_CTL1				(AP_PWR_BASE + (0x154))
#define AP_PWR_32KCLK_EN				(AP_PWR_BASE + (0x158))
#define AP_PWR_CLKOUTSEL				(AP_PWR_BASE + (0x160))
#define AP_PWR_CLKOUT1CTL				(AP_PWR_BASE + (0x164))
#define AP_PWR_CLKOUT2CTL				(AP_PWR_BASE + (0x168))
#define AP_PWR_CLKOUT3CTL				(AP_PWR_BASE + (0x16c))
#define AP_PWR_SFRST_CTL				(AP_PWR_BASE + (0x180))
#define AP_PWR_CHIPRSTN_CTL				(AP_PWR_BASE + (0x184))
#define AP_PWR_CP_RSTCTL				(AP_PWR_BASE + (0x188))
#define AP_PWR_TOP_RSTCTL				(AP_PWR_BASE + (0x18c))
#define AP_PWR_HA7_RSTCTL0				(AP_PWR_BASE + (0x190))
#define AP_PWR_HA7_RSTCTL1				(AP_PWR_BASE + (0x194))
#define AP_PWR_SA7_RSTCTL0				(AP_PWR_BASE + (0x1a0))
#define AP_PWR_SA7_RSTCTL1				(AP_PWR_BASE + (0x1a4))
#define AP_PWR_MOD_RSTCTL0				(AP_PWR_BASE + (0x1b0))
#define AP_PWR_MOD_RSTCTL1				(AP_PWR_BASE + (0x1b4))
#define AP_PWR_MOD_RSTCTL2				(AP_PWR_BASE + (0x1b8))
#define AP_PWR_MOD_RSTCTL3				(AP_PWR_BASE + (0x1bc))
#define AP_PWR_GPU_RSTCTL				(AP_PWR_BASE + (0x1c0))
#define AP_PWR_VIDEO_RSTCTL				(AP_PWR_BASE + (0x1c4))
#define AP_PWR_DSIISP_RSTCTL				(AP_PWR_BASE + (0x1c8))
#define AP_PWR_USB_RSTCTL				(AP_PWR_BASE + (0x1cc))
#define AP_PWR_HBLK0_RSTCTL				(AP_PWR_BASE + (0x1d0))
#define AP_PWR_WDT_RSTCTL				(AP_PWR_BASE + (0x1d4))
#define AP_PWR_INTR_FLAG0				(AP_PWR_BASE + (0x1f0))
#define AP_PWR_INTR_FLAG1				(AP_PWR_BASE + (0x1f4))
#define AP_PWR_INTR_FLAG2				(AP_PWR_BASE + (0x1f8))
#define AP_PWR_INT_RAW					(AP_PWR_BASE + (0x200))
#define AP_PWR_INTEN_A7					(AP_PWR_BASE + (0x204))
#define AP_PWR_INTST_A7					(AP_PWR_BASE + (0x208))
#define AP_PWR_PDFSM_ST0				(AP_PWR_BASE + (0x220))
#define AP_PWR_PDFSM_ST1				(AP_PWR_BASE + (0x224))
#define AP_PWR_PDFSM_ST2				(AP_PWR_BASE + (0x228))
#define AP_PWR_HA7_SCU_PD_CTL				(AP_PWR_BASE + (0x230))
#define AP_PWR_HA7_C0_PD_CTL				(AP_PWR_BASE + (0x234))
#define AP_PWR_HA7_C1_PD_CTL				(AP_PWR_BASE + (0x238))
#define AP_PWR_HA7_C2_PD_CTL				(AP_PWR_BASE + (0x23c))
#define AP_PWR_HA7_C3_PD_CTL				(AP_PWR_BASE + (0x240))
#define AP_PWR_SA7_SCU_PD_CTL				(AP_PWR_BASE + (0x248))
#define AP_PWR_SA7_C_PD_CTL				(AP_PWR_BASE + (0x24c))
#define AP_PWR_ON2_PD_CTL				(AP_PWR_BASE + (0x250))
#define AP_PWR_ACC2D_PD_CTL				(AP_PWR_BASE + (0x258))
#define AP_PWR_DISPLAY_PD_CTL				(AP_PWR_BASE + (0x25c))
#define AP_PWR_ISP_PD_CTL				(AP_PWR_BASE + (0x260))
#define AP_PWR_USB_PD_CTL				(AP_PWR_BASE + (0x264))
#define AP_PWR_HSIC_PD_CTL				(AP_PWR_BASE + (0x268))
#define AP_PWR_SA7_DBG_PD_CTL				(AP_PWR_BASE + (0x26c))
#define AP_PWR_HA7_SCU_PD_CNT1				(AP_PWR_BASE + (0x270))
#define AP_PWR_HA7_C_PD_CNT1				(AP_PWR_BASE + (0x274))
#define AP_PWR_SA7_SCU_PD_CNT1				(AP_PWR_BASE + (0x278))
#define AP_PWR_SA7_C_PD_CNT1				(AP_PWR_BASE + (0x27c))
#define AP_PWR_ON2_PD_CNT1				(AP_PWR_BASE + (0x280))
#define AP_PWR_ACC2D_PD_CNT1				(AP_PWR_BASE + (0x288))
#define AP_PWR_DISPLAY_PD_CNT1				(AP_PWR_BASE + (0x28c))
#define AP_PWR_ISP_PD_CNT1				(AP_PWR_BASE + (0x290))
#define AP_PWR_USB_PD_CNT1				(AP_PWR_BASE + (0x294))
#define AP_PWR_HSIC_C_PD_CNT1				(AP_PWR_BASE + (0x298))
#define AP_PWR_HA7_SCU_PD_CNT2				(AP_PWR_BASE + (0x2a0))
#define AP_PWR_HA7_C_PD_CNT2				(AP_PWR_BASE + (0x2a4))
#define AP_PWR_SA7_SCU_PD_CNT2				(AP_PWR_BASE + (0x2a8))
#define AP_PWR_SA7_C_PD_CNT2				(AP_PWR_BASE + (0x2ac))
#define AP_PWR_ON2_PD_CNT2				(AP_PWR_BASE + (0x2b0))
#define AP_PWR_ACC2D_PD_CNT2				(AP_PWR_BASE + (0x2b8))
#define AP_PWR_DISPLYA_PD_CNT2				(AP_PWR_BASE + (0x2bc))
#define AP_PWR_ISP_PD_CNT2				(AP_PWR_BASE + (0x2c0))
#define AP_PWR_USB_PD_CNT2				(AP_PWR_BASE + (0x2c4))
#define AP_PWR_HSIC_C_PD_CNT2				(AP_PWR_BASE + (0x2c8))
#define AP_PWR_HA7_SCU_PD_CNT3				(AP_PWR_BASE + (0x2d0))
#define AP_PWR_HA7_C_PD_CNT3				(AP_PWR_BASE + (0x2d4))
#define AP_PWR_SA7_SCU_PD_CNT3				(AP_PWR_BASE + (0x2d8))
#define AP_PWR_SA7_C_PD_CNT3				(AP_PWR_BASE + (0x2dc))
#define AP_PWR_ON2_PD_CNT3				(AP_PWR_BASE + (0x2e0))
#define AP_PWR_ACC2D_PD_CNT3				(AP_PWR_BASE + (0x2e8))
#define AP_PWR_DISPLAY_PD_CNT3				(AP_PWR_BASE + (0x2ec))
#define AP_PWR_ISP_PD_CNT3				(AP_PWR_BASE + (0x2f0))
#define AP_PWR_USB_PD_CNT3				(AP_PWR_BASE + (0x2f4))
#define AP_PWR_HSIC_PD_CNT3				(AP_PWR_BASE + (0x2f8))
#define AP_PWR_PDTM_CTL					(AP_PWR_BASE + (0x300))
#define AP_PWR_PWEN_CTL					(AP_PWR_BASE + (0x308))
#define AP_PWR_GPU_PD_CTL				(AP_PWR_BASE + (0x30c))
#define AP_PWR_GPU_PD_CNT1				(AP_PWR_BASE + (0x310))
#define AP_PWR_GPU_PD_CNT2				(AP_PWR_BASE + (0x314))
#define AP_PWR_GPU_PD_CNT3				(AP_PWR_BASE + (0x318))
#define AP_PWR_BOOTCTL					(AP_PWR_BASE + (0x320))
#define AP_PWR_RES_REG					(AP_PWR_BASE + (0x324))
#define AP_PWR_DEVICE_ST				(AP_PWR_BASE + (0x328))
#define AP_PWR_LP_CTL					(AP_PWR_BASE + (0x330))
#define AP_PWR_APB_DFS_LIMIT				(AP_PWR_BASE + (0x334))
#define AP_PWR_TM32K_CTL				(AP_PWR_BASE + (0x340))
#define AP_PWR_TM32K_INIT_VAL				(AP_PWR_BASE + (0x344))
#define AP_PWR_TM32K_CUR_VAL				(AP_PWR_BASE + (0x348))
#define AP_PWR_BUSLP_CTL				(AP_PWR_BASE + (0x34c))
#define AP_PWR_BUSLP_EN0				(AP_PWR_BASE + (0x350))
#define AP_PWR_BUSLP_EN1				(AP_PWR_BASE + (0x354))
#define AP_PWR_BUSLP_EN2				(AP_PWR_BASE + (0x358))
#define AP_PWR_TSTPIN_CTL				(AP_PWR_BASE + (0x360))
#define AP_PWR_ACCESS_ERR_CLR				(AP_PWR_BASE + (0x36c))

/* AP_PWR_SLPCTL0. cotex a7 */
#define AP_PWR_CS_SLP_MK_WE				31
#define AP_PWR_ADB_SLP_MK_WE			30
#define AP_PWR_POWER_SLP_MK_WE			29
#define AP_PWR_DMA_SLP_MK_WE			28
#define AP_PWR_HA7C3_SLP_MK_WE			27
#define AP_PWR_HA7C2_SLP_MK_WE			26
#define AP_PWR_HA7C1_SLP_MK_WE			25
#define AP_PWR_HA7C0_SLP_MK_WE			24
#define AP_PWR_HA7_L2C_SLP_MK_WE		23
#define AP_PWR_SA7_L2C_SLP_MK_WE		22
#define AP_PWR_SA7_SLP_MK_WE			21
#define AP_PWR_SA7_SLP_EN_WE			20
#define AP_PWR_HA7C3_SLP_EN_WE			19
#define AP_PWR_HA7C2_SLP_EN_WE			18
#define AP_PWR_HA7C1_SLP_EN_WE			17
#define AP_PWR_HA7C0_SLP_EN_WE			16
#define AP_PWR_CS_SLP_MK				15
#define AP_PWR_ADB_SLP_MK				14
#define AP_PWR_POWER_SLP_MK				13
#define AP_PWR_DMA_SLP_MK				12
#define AP_PWR_HA7C3_SLP_MK				11
#define AP_PWR_HA7C2_SLP_MK				10
#define AP_PWR_HA7C1_SLP_MK				9
#define AP_PWR_HA7C0_SLP_MK				8
#define AP_PWR_HA7_L2C_SLP_MK			7
#define AP_PWR_SA7_L2C_SLP_MK			6
#define AP_PWR_SA7_SLP_MK				5
#define AP_PWR_SA7_SLP_EN				4
#define AP_PWR_HA7C3_SLP_EN				3
#define AP_PWR_HA7C2_SLP_EN				2
#define AP_PWR_HA7C1_SLP_EN				1
#define AP_PWR_HA7C0_SLP_EN				0

/* AP_PWR_SLPCTL1. */
#define AP_PWR_WAKE_DLY_EN				2
#define AP_PWR_OSCEN_CTL				1
#define AP_PWR_TIMER_SYSCLK_SEL			0

/* AP_PWR_CORE_PD_CTL */
#define	AP_PWR_CORE_PU_CDBGPWRUPREQ_MK_WE	23
#define	AP_PWR_CORE_PU_WITH_SCU_WE			22
#define	AP_PWR_CORE_PU_INTR_MK_WE			21
#define	AP_PWR_CORE_AUTO_PD_MK_WE			20
#define	AP_PWR_CORE_PD_MK_WE				19
#define	AP_PWR_CORE_WK_ACK_MK_WE			18
#define	AP_PWR_CORE_WK_UP_WE				17
#define	AP_PWR_CORE_PD_EN_WE				16
#define	AP_PWR_CORE_PU_CDBGPWRUPREQ_MK		7
#define	AP_PWR_CORE_PU_WITH_SCU				6
#define	AP_PWR_CORE_PU_INTR_MK				5
#define	AP_PWR_CORE_AUTO_PD_MK				4
#define	AP_PWR_CORE_PD_MK					3
#define	AP_PWR_CORE_WK_ACK_MK				2
#define	AP_PWR_CORE_WK_UP					1
#define	AP_PWR_CORE_PD_EN					0

/* AP_PWR_HA7_SCU_PD_CTL */
#define	AP_PWR_SCU_L2C_WFI_MK				4
#define	AP_PWR_SCU_AUTO_PD_MK				3
#define	AP_PWR_SCU_PD_MK					2
#define	AP_PWR_SCU_WK_ACK_MK				1
#define	AP_PWR_SCU_PD_EN					0

/* AP_PWR_INTST_A7 */
#define	AP_PWR_CSPWRREQ_INTR				31

/*AP_PWR_VIDEO_RSTCTL */
#define	AP_PWR_AP_SW1_RSTCTL			5
#define	AP_PWR_AP_PERI_SW1_RSTCTL		4
#define	AP_PWR_SMMU0_RSTCTL			3
#define	AP_PWR_ON2_ENC_RSTCTL			2
#define	AP_PWR_ON2_CODEC_RSTCTL			1
#define	AP_PWR_ACC2D_RSTCTL			0

/* AP_PWR_MOD_PD_CTL. */
#define	AP_PWR_PD_MK_WE				19
#define	AP_PWR_WK_ACK_MK_WE			18
#define	AP_PWR_WK_UP_WE				17
#define	AP_PWR_PD_EN_WE				16
#define	AP_PWR_PD_MK				3
#define	AP_PWR_WK_ACK_MK			2
#define	AP_PWR_WK_UP				1
#define	AP_PWR_PD_EN				0

/* AP_PWR_INT_RAW */
#define AP_PWR_CSPWRREQ_RAW				31
#define AP_PWR_APWR_TM32K				30
#define AP_PWR_PLL0_F_UPD				29
#define AP_PWR_HSIC_PD_INTR				28
#define AP_PWR_USB_PD_INTR				27
#define AP_PWR_ISP_PD_INTR				26
#define AP_PWR_DISPLAY_PD_INTR			25
#define AP_PWR_GPU_PD_INTR 				24
#define AP_PWR_ON2_PD_INTR				23
#define AP_PWR_ACC2D_PD_INTR			22
#define AP_PWR_HA7_C3_PD_INTR			21
#define AP_PWR_HA7_C2_PD_INTR			20
#define AP_PWR_HA7_C1_PD_INTR			19
#define AP_PWR_HA7_C0_PD_INTR			18
#define AP_PWR_HA7_SCU_PD_INTR			17
#define AP_PWR_SA7_C_PD_INTR			16
#define AP_PWR_SA7_SCU_PD_INTR			15
#define AP_PWR_HSIC_PU_INTR				13
#define AP_PWR_USB_PU_INTR				12
#define AP_PWR_ISP_PU_INTR				11
#define AP_PWR_DISPLAY_PU_INTR			10
#define AP_PWR_GPU_PU_INTR				9
#define AP_PWR_ON2_PU_INTR				8
#define AP_PWR_ACC2D_PU_INTR			7
#define AP_PWR_HA7_C3_PU_INTR			6
#define AP_PWR_HA7_C2_PU_INTR			5
#define AP_PWR_HA7_C1_PU_INTR			4
#define AP_PWR_HA7_C0_PU_INTR			3
#define AP_PWR_HA7_SCU_PU_INTR			2
#define AP_PWR_SA7_C_PU_INTR			1
#define AP_PWR_SA7_SCU_PU_INTR			0

/* AP_PWR_PDFSM_ST0. */
#define AP_PWR_PDFSM_ST0_SA7_C_PD_ST		28
#define AP_PWR_PDFSM_ST0_SA7_SCU_PD_ST		24
#define AP_PWR_PDFSM_ST0_HA7_C3_PD_ST		16
#define AP_PWR_PDFSM_ST0_HA7_C2_PD_ST		12
#define AP_PWR_PDFSM_ST0_HA7_C1_PD_ST		8
#define AP_PWR_PDFSM_ST0_HA7_C0_PD_ST		4
#define AP_PWR_PDFSM_ST0_HA7_SCU_PD_ST		0

/* AP_PWR_PDFSM_ST1. */
#define AP_PWR_PDFSM_ST1_HSIC_PD_ST		24
#define AP_PWR_PDFSM_ST1_USB_PD_ST		20
#define AP_PWR_PDFSM_ST1_ISP_PD_ST		16
#define AP_PWR_PDFSM_ST1_DISPLAY_PD_ST		12
#define AP_PWR_PDFSM_ST1_ACC2D_PD_ST		8
#define AP_PWR_PDFSM_ST1_ON2_PD_ST		0

/* AP_PWR_PDFSM_ST2. */
#define AP_PWR_PDFSM_ST2_GPU_PD_ST		0

#define AP_PWR_INTST_ARM			AP_PWR_INTST_A7
#define AP_PWR_INTEN_ARM			AP_PWR_INTEN_A7

#endif