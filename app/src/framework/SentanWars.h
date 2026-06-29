#pragma once
#include <Framework.h>
#include <memory>
#include <debug/DebugEntryManager.h>

class MotionEditor;

class SentanWars : public Framework
{
public: // メンバ関数
    /// <summary>
    /// 初期化
    /// </summary>
    void Initialize() override;

    /// <summary>
    /// 終了
    /// </summary>
    void Finalize() override;

    /// <summary>
    /// 更新
    /// </summary>
    void Update() override;

    /// <summary>
    /// 描画
    /// </summary>
    void Draw() override;

private:
    MotionEditor* motionEditor_ = nullptr;
    std::unique_ptr<DebugEntryManager> pDebugEntryManager_ = nullptr;
};
