#include "TextureImplCreator.hpp"
#include <LDL/Core/RuntimeError.hpp>
#include <LDL/Enums/RenderMode.hpp>

#include "../Renders/Software/TextureBatcherImplSoftware.hpp"
#include "../Renders/OpenGL1/TextureBatcherImplOpenGL1.hpp"
#include "../Renders/OpenGL3/TextureBatcherImplOpenGL3.hpp"
#include "../Renders/Glide/TextureBatcherImplGlide.hpp"

#include "TextureBatcherImplCreator.hpp"

using namespace LDL::Core;
using namespace LDL::Enums;
using namespace LDL::Math;
using namespace LDL::Graphics;
using namespace LDL::Graphics::Creators;

TextureBatcherImpl* TextureBatcherImplCreator::Create(RenderContext* renderContext, Texture* texture, size_t count)
{
	size_t renderMode = renderContext->Mode();

	TextureBatcherImpl* result = NULL;

	switch (renderMode)
	{
	case RenderMode::Software:
		result = new TextureBatcherImplSoftware(texture, count);
		break;
	case RenderMode::OpenGL1:
		result = new TextureBatcherImplOpenGL1(texture, count);
		break;
	case RenderMode::OpenGL3:
		result = new TextureBatcherImplOpenGL3(texture, count);
		break;
	case RenderMode::Glide:
		result = new TextureBatcherImplGlide(texture, count);
		break;
	default:
		throw RuntimeError("Unknown graphics mode");
		break;
	}

	return result;
}
