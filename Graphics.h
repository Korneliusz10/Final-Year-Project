#pragma once
#include <Windows.h>
#include <d2d1.h>
class Graphics {
	// A factory is used to creat many graphics reasaurces
	ID2D1Factory* factory;
	ID2D1HwndRenderTarget* rendertarget;
	ID2D1SolidColorBrush* brush;

public:
	Graphics();
	~Graphics();

	bool Init(HWND windowhandle);

	ID2D1RenderTarget* GetRenderTarget() {
		return rendertarget;
	}

	// we begin drawing
	void BeginDraw() {
		rendertarget->BeginDraw();
	}
	// then tell the program we have finished drawing ( updates the draw ) 
	void EndDraw() {
		rendertarget->EndDraw();
	}
	void ClearScreen(float r, float g, float b) {
		rendertarget->Clear(D2D1::ColorF(r,g,b));
	}
	void DrawCircle(float x, float y, float radius, float r, float g, float b,float a) {
		brush->SetColor(D2D1::ColorF(r,g,b,a));
		rendertarget->DrawEllipse(D2D1::Ellipse(D2D1::Point2F(x, y), radius, radius), brush, 3.0f);

	} 
	
};

