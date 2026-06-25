---
doc_id: "2064911496346779648"
title: "ADC数据采集"
parent_id: "2064910734866694144"
sort: 3
content_type: 1
---

\nADC 数据是雷达信号处理链路中的底层数据，适合用于 FFT、滤波、检测、微多普勒分析、特征提取等研究。\n\n### 启动 ADC 采集\n\nADC 数据采集通过 RadarTools 完成。\n\n操作流程：\n\n1. 连接雷达并完成上位机配置。\n2. 点击 `Start`，确认雷达数据流正常输出。\n3. 在 RadarTools 中点击 `ADC采集` 按钮。\n4. 进入 ADC 采集界面。\n5. 按实验需求配置采集参数。\n6. 点击开始采集。\n7. 等待采集完成后，检查输出文件。\n\n###  ADC 采集参数\n\nADC 采集界面中通常包含以下配置项：\n\n| 配置项       | 说明           |\n| --------- | ------------ |\n| FrameType | 波形类型 / 帧类型   |\n| RxCh      | 接收通道选择       |\n| Sample    | 每 chirp 采样点数 |\n| Chirp_N   | chirp 数量     |\n| 文件名       | 当前采集文件名称     |\n| 目标目录      | ADC 数据保存目录   |\n| DataType  | 数据类型         |\n\n不同波形对应的 ADC 数据需要使用对应配置文件进行后续解析。\n\n###  ADC 数据保存目录\n\nADC 数据采集完成后，数据文件默认保存至：\n\n```text\ntools/RadarTools_Release/adcData/\n```\n\n采集完成后，请确认该目录下已生成对应数据文件。\n\n示例目录结构：\n\n```text\ntools/RadarTools_Release/adcData/\n├── adc_rx0.txt\n├── adc_rx1.txt\n├── adc_rx2.txt\n└── adc_rx3.txt\n```\n\n实际文件名以采集工具生成结果为准。