# M5Go_Test02

Codexを使ったArduino開発とGit/GitHub管理の流れを練習するためのM5GOプロジェクトです。

## 動作

- 電源ON時に画面全体を黒にします。
- BtnAを押すと画面全体を白にします。
- M5Stackライブラリを使用します。

## ビルド

使用ボード: `M5Stack-Core-ESP32`  
FQBN: `esp32:esp32:m5stack-core-esp32`

```powershell
arduino-cli compile --fqbn esp32:esp32:m5stack-core-esp32 "C:\Users\tatsuya\Desktop\Codex\M5Go_Test02"
```

書き込みは、接続中のM5GOのポートを確認してから実行します。このプロジェクト作成時点では書き込みもGitHubへのpushも行いません。
