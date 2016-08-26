#include "comipfb.h"
#include "comipfb_dev.h"
#include "mipi_cmd.h"
#include "mipi_interface.h"

static u8 backlight_cmds[][ROW_LINE] = {
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0x51, 0xFF},
};

//[0]: delay after transfer; [1]:count of data; [2]: word count ls; [3]:word count ms; [4]...: data for transfering
static u8 lcd_cmds_init[][ROW_LINE] = {
/****Start Initial Sequence ***/
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0xe1, 0xa3},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0xb3, 0x00},
	{0x00, GEN_CMD, LW_PACK, 0x07, 0x05, 0x00, 0xb6, 0x16, 0x0f, 0x00, 0x00},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xb8, 0x00, 0x06, 0x08, 0x00, 0x07, 0x09, 0x23, 0x04},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xb9, 0x04, 0x08, 0x22, 0xff, 0xff, 0x0f},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xba, 0x0e, 0x0e, 0x10, 0x10, 0x0a, 0x0a, 0x0c, 0x0c},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xbb, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xbd, 0x0f, 0x0f, 0x11, 0x11, 0x0b, 0x0b, 0x0d, 0x0d},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xbe, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x00, GEN_CMD, LW_PACK, 0x06, 0x04, 0x00, 0xb1, 0x16, 0x1e, 0x12},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xe0, 0x01, 0x03, 0x02, 0x00, 0x01},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xd0, 0x00, 0x00, 0x10, 0x1e, 0x22, 0x2e},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xd1, 0x26, 0x2b, 0x23, 0x1b, 0x0a},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xd2, 0x00, 0x00, 0x10, 0x1e, 0x22, 0x2e},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xd3, 0x26, 0x2b, 0x23, 0x1b, 0x0a},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xd4, 0x00, 0x00, 0x10, 0x1e, 0x22, 0x2e},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xd5, 0x26, 0x2b, 0x23, 0x1b, 0x0a},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xd6, 0x00, 0x00, 0x10, 0x1e, 0x22, 0x2e},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xd7, 0x26, 0x2b, 0x23, 0x1b, 0x0a},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xd8, 0x00, 0x00, 0x10, 0x1e, 0x22, 0x2e},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xd9, 0x26, 0x2b, 0x23, 0x1b, 0x0a},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xda, 0x00, 0x00, 0x10, 0x1e, 0x22, 0x2e},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xdb, 0x26, 0x2b, 0x23, 0x1b, 0x0a},
	{0x00, GEN_CMD, LW_PACK, 0x07, 0x05, 0x00, 0x70, 0xd8, 0x00, 0xff, 0x80},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0xff, 0x01},
	{0x00, GEN_CMD, LW_PACK, 0x05, 0x03, 0x00, 0xc6, 0x99, 0x33},
	{0x00, GEN_CMD, LW_PACK, 0x05, 0x03, 0x00, 0xde, 0x9d, 0x30},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0x14, 0x00},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0xe9, 0x07},
	{0x00, GEN_CMD, LW_PACK, 0x05, 0x03, 0x00, 0xed, 0x60, 0x10},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0xec, 0x12},
	{0x00, GEN_CMD, LW_PACK, 0x07, 0x05, 0x00, 0xcd, 0x77, 0x7b, 0x34, 0x08},
	{0x00, GEN_CMD, LW_PACK, 0x0a, 0x08, 0x00, 0xc3, 0x03, 0x05, 0x34, 0x05, 0x01, 0x44, 0x54},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xc4, 0x02, 0x03, 0x58, 0x58, 0x5a},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xde, 0x95, 0xcf, 0xd4, 0x10, 0x0f, 0x10},
	{0x00, GEN_CMD, LW_PACK, 0x06, 0x04, 0x00, 0xcb, 0xdf, 0x80, 0x00},
	{0x00, GEN_CMD, LW_PACK, 0x05, 0x03, 0x00, 0xea, 0x15, 0x28},
	{0x00, GEN_CMD, LW_PACK, 0x07, 0x05, 0x00, 0xf0, 0x38, 0x00, 0x00, 0x00},
	{0x00, GEN_CMD, LW_PACK, 0x06, 0x04, 0x00, 0xc9, 0x60, 0x00, 0x82},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xb5, 0x00, 0x05, 0x05, 0x1e, 0x04, 0x40, 0x20, 0xfc},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0x36, 0x08},
//	{0x00, GEN_CMD, SW_PACK2, 0x02, 0x53, 0x24},
//	{0x00, GEN_CMD, SW_PACK2, 0x02, 0x55, 0x00},
//	{0x00, DCS_CMD, SW_PACK2, 0x02, 0x51, 0xFF},
	{0x82, DCS_CMD, SW_PACK1, 0x01, 0x11},
	{0x0a, DCS_CMD, SW_PACK1, 0x01, 0x29},  //must be delayed
	{0x0a, GEN_CMD, LW_PACK, 0x07, 0x05, 0x00, 0xf0, 0x18, 0xff, 0xff, 0x00},
};

static u8 lcd_cmds_suspend[][ROW_LINE] = {
	{0x0A, GEN_CMD, SW_PACK1, 0x01, 0x28},
	{0xff, GEN_CMD, SW_PACK1, 0x01, 0x10},	//TODO delay is 300ms.
};

static u8 lcd_cmds_resume[][ROW_LINE] = {
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0xe1, 0xa3},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0xb3, 0x00},
	{0x00, GEN_CMD, LW_PACK, 0x07, 0x05, 0x00, 0xb6, 0x16, 0x0f, 0x00, 0x00},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xb8, 0x00, 0x06, 0x08, 0x00, 0x07, 0x09, 0x23, 0x04},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xb9, 0x04, 0x08, 0x22, 0xff, 0xff, 0x0f},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xba, 0x0e, 0x0e, 0x10, 0x10, 0x0a, 0x0a, 0x0c, 0x0c},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xbb, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xbd, 0x0f, 0x0f, 0x11, 0x11, 0x0b, 0x0b, 0x0d, 0x0d},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xbe, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1, 0xa1},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x00, GEN_CMD, LW_PACK, 0x06, 0x04, 0x00, 0xb1, 0x16, 0x1e, 0x12},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xe0, 0x01, 0x03, 0x02, 0x00, 0x01},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xd0, 0x00, 0x00, 0x10, 0x1e, 0x22, 0x2e},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xd1, 0x26, 0x2b, 0x23, 0x1b, 0x0a},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xd2, 0x00, 0x00, 0x10, 0x1e, 0x22, 0x2e},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xd3, 0x26, 0x2b, 0x23, 0x1b, 0x0a},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xd4, 0x00, 0x00, 0x10, 0x1e, 0x22, 0x2e},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xd5, 0x26, 0x2b, 0x23, 0x1b, 0x0a},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xd6, 0x00, 0x00, 0x10, 0x1e, 0x22, 0x2e},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xd7, 0x26, 0x2b, 0x23, 0x1b, 0x0a},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xd8, 0x00, 0x00, 0x10, 0x1e, 0x22, 0x2e},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xd9, 0x26, 0x2b, 0x23, 0x1b, 0x0a},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xda, 0x00, 0x00, 0x10, 0x1e, 0x22, 0x2e},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xdb, 0x26, 0x2b, 0x23, 0x1b, 0x0a},
	{0x00, GEN_CMD, LW_PACK, 0x07, 0x05, 0x00, 0x70, 0xd8, 0x00, 0xff, 0x80},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0xff, 0x01},
	{0x00, GEN_CMD, LW_PACK, 0x05, 0x03, 0x00, 0xc6, 0x99, 0x33},
	{0x00, GEN_CMD, LW_PACK, 0x05, 0x03, 0x00, 0xde, 0x9d, 0x30},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0x14, 0x00},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0xe9, 0x07},
	{0x00, GEN_CMD, LW_PACK, 0x05, 0x03, 0x00, 0xed, 0x60, 0x10},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0xec, 0x12},
	{0x00, GEN_CMD, LW_PACK, 0x07, 0x05, 0x00, 0xcd, 0x77, 0x7b, 0x34, 0x08},
	{0x00, GEN_CMD, LW_PACK, 0x0a, 0x08, 0x00, 0xc3, 0x03, 0x05, 0x34, 0x05, 0x01, 0x44, 0x54},
	{0x00, GEN_CMD, LW_PACK, 0x08, 0x06, 0x00, 0xc4, 0x02, 0x03, 0x58, 0x58, 0x5a},
	{0x00, GEN_CMD, LW_PACK, 0x09, 0x07, 0x00, 0xde, 0x95, 0xcf, 0xd4, 0x10, 0x0f, 0x10},
	{0x00, GEN_CMD, LW_PACK, 0x06, 0x04, 0x00, 0xcb, 0xdf, 0x80, 0x00},
	{0x00, GEN_CMD, LW_PACK, 0x05, 0x03, 0x00, 0xea, 0x15, 0x28},
	{0x00, GEN_CMD, LW_PACK, 0x07, 0x05, 0x00, 0xf0, 0x38, 0x00, 0x00, 0x00},
	{0x00, GEN_CMD, LW_PACK, 0x06, 0x04, 0x00, 0xc9, 0x60, 0x00, 0x82},
	{0x00, GEN_CMD, LW_PACK, 0x0b, 0x09, 0x00, 0xb5, 0x00, 0x05, 0x05, 0x1e, 0x04, 0x40, 0x20, 0xfc},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0x36, 0x08},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0x53, 0x24},
	{0x00, GEN_CMD, SW_PACK2, 0x02, 0x55, 0x00},
	{0x00, DCS_CMD, SW_PACK2, 0x02, 0x51, 0xFF},
	{0x82, DCS_CMD, SW_PACK1, 0x01, 0x11},
	{0x0a, DCS_CMD, SW_PACK1, 0x01, 0x29}, //must be delayed
	{0x0a, GEN_CMD, LW_PACK, 0x07, 0x05, 0x00, 0xf0, 0x18, 0xff, 0xff, 0x00},
};

static int lcd_zetrax_ssd2075_reset(struct comipfb_info *fbi)
{
	int gpio_rst = fbi->pdata->gpio_rst;

	if (gpio_rst >= 0) {
		gpio_request(gpio_rst, "LCD Reset");
		gpio_direction_output(gpio_rst, 1);
		mdelay(10);
		gpio_direction_output(gpio_rst, 0);
		mdelay(10);
		gpio_direction_output(gpio_rst, 1);
		mdelay(200);
		gpio_free(gpio_rst);
	}
	return 0;
}

static int lcd_zetrax_ssd2075_suspend(struct comipfb_info *fbi)
{
	int ret=0;
	struct comipfb_dev_timing_mipi *mipi;

	mipi = &(fbi->cdev->timing.mipi);

	if (mipi->display_mode == MIPI_VIDEO_MODE) {
		mipi_dsih_hal_mode_config(fbi, 1);
	}
	if (!(fbi->pdata->flags & COMIPFB_SLEEP_POWEROFF))
		ret = comipfb_if_mipi_dev_cmds(fbi, &fbi->cdev->cmds_suspend);
	msleep(20);
	mipi_dsih_dphy_enable_hs_clk(fbi, 0);
	if(fbi->cdev->reset)
		fbi->cdev->reset(fbi);

	mipi_dsih_dphy_ulps_en(fbi, 1);
	mipi_dsih_dphy_reset(fbi, 0);
	mipi_dsih_dphy_shutdown(fbi, 0);
	
	return ret;
}

static int lcd_zetrax_ssd2075_resume(struct comipfb_info *fbi)
{
	int ret=0;
	struct comipfb_dev_timing_mipi *mipi;

	mipi = &(fbi->cdev->timing.mipi);

	mipi_dsih_dphy_shutdown(fbi, 1);
	mipi_dsih_dphy_reset(fbi, 1);
	mipi_dsih_dphy_ulps_en(fbi, 0);

	if (fbi->cdev->reset)
  		fbi->cdev->reset(fbi);

#ifdef CONFIG_FBCON_DRAW_PANIC_TEXT
	if (unlikely(kpanic_in_progress == 1)) {
		ret = comipfb_if_mipi_dev_cmds(fbi, &fbi->cdev->cmds_init);
	}
	else
		ret = comipfb_if_mipi_dev_cmds(fbi, &fbi->cdev->cmds_resume);
#else
	ret = comipfb_if_mipi_dev_cmds(fbi, &fbi->cdev->cmds_resume);
#endif
	msleep(20);
	if (mipi->display_mode == MIPI_VIDEO_MODE) {
		mipi_dsih_hal_mode_config(fbi, 0);
	}
	mipi_dsih_dphy_enable_hs_clk(fbi, 1);

	return ret;
}

//the REG c181 must set to 0x77 ,max fps is 70HZ
/* 2012-12-19 pclk 31.2M 4-26-24-1-20-21----534*896  65.2fps */
struct comipfb_dev lcd_zetrax_ssd2075_dev = {
	.name = "lcd_zetrax_ssd2075",
	.interface_info = COMIPFB_MIPI_IF,
	.lcd_id = 0,
	.refresh_en = 1,
	.bpp = 32,
	.xres = 720,
	.yres = 1280,
	.flags = 0,
	.pclk = 54000000,
	.timing = {
		.mipi = {
			.hs_freq = 62400,               //Kbyte
			.lp_freq = 10000,                //KHZ
			.no_lanes = 4,
			.display_mode = MIPI_VIDEO_MODE,
			.im_pin_val = 1,
			.color_mode = {
				.color_bits = COLOR_CODE_24BIT,
			},
			.videomode_info = {
				.hsync = 2,
				.hbp = 28,
				.hfp = 50,
				.vsync = 3,
				.vbp = 12,
				.vfp = 8,
				.sync_pol = COMIPFB_VSYNC_HIGH_ACT,
				.lp_cmd_en = 1,
				.lp_hfp_en = 1,
				.lp_hbp_en = 1,
				.lp_vact_en = 1,
				.lp_vfp_en = 1,
				.lp_vbp_en = 1,
				.lp_vsa_en = 1,
				.mipi_trans_type = VIDEO_BURST_WITH_SYNC_PULSES,
			},
			.phytime_info = {
				.clk_tprepare = 3, //HSBYTECLK
			},
			.teinfo = {
				.te_source = 1, //external signal
				.te_trigger_mode = 0,
				.te_en = 0,
				.te_sync_en = 0,
			},
			.ext_info = {
				.eotp_tx_en = 0,
			},
		},
	},
	.cmds_init = {ARRAY_AND_SIZE(lcd_cmds_init)},
	.cmds_suspend = {ARRAY_AND_SIZE(lcd_cmds_suspend)},
	.cmds_resume = {ARRAY_AND_SIZE(lcd_cmds_resume)},
	.reset = lcd_zetrax_ssd2075_reset,
	.suspend = lcd_zetrax_ssd2075_suspend,
	.resume = lcd_zetrax_ssd2075_resume,
	.backlight_info = {ARRAY_AND_SIZE(backlight_cmds),
		.brightness_bit = 5,
	},
};

static int __init lcd_zetrax_ssd2075_init(void)
{
	return comipfb_dev_register(&lcd_zetrax_ssd2075_dev);
}

subsys_initcall(lcd_zetrax_ssd2075_init);