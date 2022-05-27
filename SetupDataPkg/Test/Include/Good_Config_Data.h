/** @file
  Known Good Config data for unit test purpose.

  Copyright (c) Microsoft Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef GOOD_CONFIG_DATA_H_
#define GOOD_CONFIG_DATA_H_

#define KNOWN_GOOD_XML  "<?xml version=\"1.0\" encoding=\"utf-8\"?><SettingsPacket xmlns=\"urn:UefiSettings-Schema\"><CreatedBy>Dfci Testcase Libraries</CreatedBy><CreatedOn>2022-04-29 17:19</CreatedOn><Version>1</Version><LowestSupportedVersion>1</LowestSupportedVersion><Settings><Setting><Id>Device.ConfigData.ConfigData</Id><Value>Q0ZHRBAAAACkAAAAABAAAA0AAA8AAAAAAAAAABEAAAcAAAAAIAAAAAAAAAANAAAoAAAAAAAAAAARAAAYAAAAAEQzIhFGMyIRIQAAIAAAAABHMyIRAQIDBBERIiIzM0REIiIREUREMzMZAAABAAAAAE8AAIAAAAAAAAAAAQAAAAAlAAAIAAAAAAAAAAAAAgAARnd1SW1hZ2UuYmluAAAAAAAAAAA=</Value></Setting></Settings></SettingsPacket>"

UINT8  mGood_Tag_0xF0[] = {
  0x00, 0x00, 0x00, 0x00,
};

UINT8  mGood_Tag_0x70[] = {
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

UINT8  mGood_Tag_0x280[] = {
  0x00, 0x00, 0x00, 0x00,
};

UINT8  mGood_Tag_0x180[] = {
  0x44, 0x33, 0x22, 0x11, 0x46, 0x33, 0x22, 0x11,
};

UINT8  mGood_Tag_0x200[] = {
  0x47, 0x33, 0x22, 0x11, 0x01, 0x02, 0x03, 0x04, 0x11, 0x11, 0x22, 0x22, 0x33, 0x33, 0x44, 0x44, 0x22, 0x22, 0x11, 0x11, 0x44, 0x44, 0x33, 0x33,
};

UINT8  mGood_Tag_0x10[] = {
  0x4F, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
};

UINT8  mGood_Tag_0x80[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x46, 0x77, 0x75, 0x49, 0x6D, 0x61, 0x67, 0x65, 0x2E, 0x62, 0x69, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/*
  The known good configuration data consist of per tag data from above
*/
UINT8  mKnown_Good_Config_Data[] = {
  0x43, 0x46, 0x47, 0x44, 0x10, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
  0x0d, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x07,
  0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x28,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x33, 0x22, 0x11, 0x46, 0x33, 0x22, 0x11, 0x21, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x33, 0x22, 0x11, 0x01, 0x02, 0x03, 0x04, 0x11, 0x11, 0x22, 0x22, 0x33, 0x33, 0x44, 0x44,
  0x22, 0x22, 0x11, 0x11, 0x44, 0x44, 0x33, 0x33, 0x19, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
  0x4f, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
  0x25, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
  0x46, 0x77, 0x75, 0x49, 0x6d, 0x61, 0x67, 0x65, 0x2e, 0x62, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};

#endif // GOOD_CONFIG_DATA_H_