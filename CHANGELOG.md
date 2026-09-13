# Changelog

M5Go_Test02の主な変更内容と確認結果を記録します。新しい履歴を上に追加します。

## 2026-09-13 - GitHub更新管理

- Summary: スケッチ変更時にREADME、CHANGELOG、コミット本文へ更新内容を記録し、GitHubへ反映するプロジェクトルールを追加。
- Files: `AGENTS.md`, `README.md`, `CHANGELOG.md`
- Verification: ドキュメントとプロジェクトルールのみの変更。Arduinoスケッチは未変更。

## 2026-09-13 - キャラクター操作

- Summary: BtnAにクリーパー、BtnBにエンダーマン、BtnAとBtnBの同時押しにエンダードラゴンの表示と効果音を追加。BtnCは黒画面と最低輝度に設定。
- Files: `M5Go_Test02.ino`, `README.md`
- Verification: Arduino CLIコンパイル成功。M5GOへ書き込み、データのハッシュ検証とCOM3への再接続を確認。
