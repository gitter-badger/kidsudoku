/*
 * Const.h
 *
 *  Created on: 2015年5月22日
 *      Author: kerlw
 */

#ifndef CONST_H_
#define CONST_H_

static const char* KEYNAME_EXTERNAL_DATA_PATH = "external_data_path";

static const char* KEY_SUFFIX_STAGE_STATUS = "_stage_status";

static const char* const FRAME_NAME[] = {
		"1.png", "2.png", "3.png", "4.png", "5.png", "6.png", "7.png", "8.png", "9.png", "error_mask.png"
	};

static const int MAX_NUMBERS = 9;
static const int MAX_CELLS = 81;		// 9*9

static const int ERROR_MASK_INDEX = 9;

static const int CELL_SIZE = 140;

static const float RESOLUTION_WIDTH = 1280.0f;

static const float RESOLUTION_HEIGHT = 720.0f;

static const char* PACKED_CAMPAIGN_FILE_EXTENSION = "pcd";
static const char* PATH_DATA = "data/";
static const char* PATH_RESOURCE = "res/";
static const char* PATH_PACKEDDATA = "download/";

#endif /* CONST_H_ */
