#ifndef LDL_Graphics_DirectDraw1_TextureBatcherImpl_hpp
#define LDL_Graphics_DirectDraw1_TextureBatcherImpl_hpp

#include <LDL/Graphics/Texture.hpp>
#include "../OpenGL/Util.hpp"
#include <vector>

namespace LDL
{
	namespace Graphics
	{
		class TextureBatcherImpl
		{
		public:
			TextureBatcherImpl(Texture* texture, size_t count);
			void Draw(const Math::Vec2u& dstPos, const Math::Vec2u& dstSize, const Math::Vec2u& srcPos, const Math::Vec2u& srcSize);
			void Clear();
		private:
		};
	}
}

#endif    