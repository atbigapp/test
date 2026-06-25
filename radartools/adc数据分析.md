---
doc_id: "2064911668388741120"
title: "ADC数据分析"
parent_id: "2064910734866694144"
sort: 4
content_type: 1
---

本节用于说明如何基于示例工程读取和分析 CTSAI-A100 ADC 数据。\n\n### Matlab 示例工程目录\n\nMatlab 示例工程位于：\n\n```text\nexamples/matlab-adc-processing/\n```\n\n示例工程中包含 CTSAI-A100 ADC 数据处理入口脚本：\n\n```text\nct_signal_processing_main_simple_CTSAIA100.m\n```\n\n### 选择波形配置文件\n\n打开以下文件：\n\n```text\nexamples/matlab-adc-processing/ct_signal_processing_main_simple_CTSAIA100.m\n```\n\n根据采集时使用的波形选择对应配置文件。\n\n远波 ADC 数据使用：\n\n```text\nsensor_config_init0.hxx\n```\n\n近波 ADC 数据使用：\n\n```text\nsensor_config_init1.hxx\n```\n\n配置示例：\n\n```matlab\ncell_cfg_file_path = {\n    '.\cfg\CTSAIA100配置\sensor_config_init0.hxx'\n};\n```\n\n### 拷贝 ADC 数据\n\n将 RadarTools 采集到的 ADC 数据文件从以下目录：\n\n```text\ntools/RadarTools_Release/adcData/\n```\n\n拷贝到 Matlab 示例工程的数据目录：\n\n```text\nexamples/matlab-adc-processing/data/\n```\n\n若数据包含多个接收通道，请确保所有通道文件均已拷贝完整。\n\n### 配置数据路径和文件名\n\n在 `ct_signal_processing_main_simple_CTSAIA100.m` 中配置 ADC 数据所在目录：\n\n```matlab\ncell_data_file_path = {\n    '.\data\'\n};\n```\n\n配置接收通道对应的数据文件名：\n\n```matlab\ncell_data_file_name_list = {\n    'adc_rx0.txt'\n    'adc_rx1.txt'\n    'adc_rx2.txt'\n    'adc_rx3.txt'\n};\n```\n\n文件名需与 `data/` 目录中的实际文件保持一致。\n\n### 运行 Matlab 处理脚本\n\n在 Matlab 中运行：\n\n```matlab\nct_signal_processing_main_simple_CTSAIA100\n```\n\n运行后，可根据示例工程输出查看处理结果。\n\n该流程适合用于：\n\n* ADC 数据读取\n* 波形参数加载\n* 距离向处理\n* 速度向处理\n* 基础目标检测\n* 雷达信号处理流程验证