#include "Graphics.h"

Graphics::Graphics() {
	// we dont want them to be set automaticly as we would have no clue what they are pointing to
	factory = NULL;
	rendertarget = NULL;
	brush = NULL;
}
Graphics::~Graphics() {
	// these are not cleand up by the system so we have to make sure we do it out self
	if (factory) { factory->Release(); };
	if (rendertarget) { rendertarget->Release(); };
	if (brush) { brush->Release(); };

}

bool Graphics::Init(HWND windowhandle) {
	HRESULT res = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED,&factory);
	if (res != S_OK) { return false; };


	RECT rect;
	GetClientRect(windowhandle,&rect);

	res = factory->CreateHwndRenderTarget(
		D2D1::RenderTargetProperties(),
		D2D1::HwndRenderTargetProperties(
			windowhandle, D2D1::SizeU(rect.right,rect.bottom)),
		&rendertarget
	);

	if (res != S_OK) return false;

	rendertarget->CreateSolidColorBrush(D2D1::ColorF(0, 1, 1,0), &brush);

	if (res != S_OK) return false;


	return true;
}