# M5Go_Test02

Codexを使ったArduino開発とGit/GitHub管理の流れを練習するためのM5GOプロジェクトです。

## 動作

- 電源ON時に画面全体を黒にします。
- BtnAを押すと、画面全体にクリーパーの顔を表示し、クリーパー風の効果音を1回鳴らします。
- BtnAを約1秒長押しすると、画面全体にウォーデンの全身を表示します。
- BtnBを押すと、画面全体にエンダーマンの顔を表示し、エンダーマン風の効果音を1回鳴らします。
- BtnAとBtnBを同時に押すと、画面全体にエンダードラゴンの顔を表示し、ドラゴン風の効果音を1回鳴らします。
- BtnCを押すと、画面全体を黒にして画面輝度を最低にします。
- BtnCの後にBtnAまたはBtnBを押すと、画面輝度を通常に戻して顔を表示します。
- M5Stackライブラリを使用します。

## ビルド

使用ボード: `M5Stack-Core-ESP32`  
FQBN: `esp32:esp32:m5stack-core-esp32`

```powershell
arduino-cli compile --fqbn esp32:esp32:m5stack-core-esp32 "C:\Users\tatsuya\Desktop\Codex\M5Go_Test02"
```

書き込みは、接続中のM5GOのポートを確認してから実行します。このプロジェクト作成時点では書き込みもGitHubへのpushも行いません。

詳細な更新記録は [CHANGELOG.md](CHANGELOG.md) を参照してください。

## History

- BtnAの約1秒長押しに、ウォーデンの全身表示を追加しました。
- BtnAとBtnBの同時押しに、エンダードラゴンの表示と専用効果音を追加しました。
- BtnAとBtnBのキャラクター表示に、それぞれ専用の効果音を追加しました。
- BtnAにクリーパー、BtnBにエンダーマン、BtnCに黒画面と最低輝度の操作を割り当てました。
- BtnCを押すと画面全体を赤にする機能を追加しました。
