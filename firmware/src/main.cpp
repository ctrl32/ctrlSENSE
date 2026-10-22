// SPDX-FileCopyrightText: 2026 ctrl32
// SPDX-License-Identifier: GPL-3.0-or-later

#include <Arduino.h>

void setup()
{
    Serial.begin(115200);
    Serial.printf("ctrlSENSE firmware %s\n", CTRLSENSE_VERSION);
}

void loop()
{
    delay(1000);
}
