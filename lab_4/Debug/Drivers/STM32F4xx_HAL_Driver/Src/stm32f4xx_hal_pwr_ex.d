sterizerOrderedTexture1D|RasterizerOrderedTexture1DArray|RasterizerOrderedTexture2D|RasterizerOrderedTexture2DArray|RasterizerOrderedTexture3D)\\b"
		},
		{
			"name": "support.type.object.rw.hlsl",
			"match": "\\b(RWBuffer|RWByteAddressBuffer|RWStructuredBuffer|RWTexture1D|RWTexture1DArray|RWTexture2D|RWTexture2DArray|RWTexture3D)\\b"
		},
		{
			"name": "support.type.object.geometryshader.hlsl",
			"match": "\\b(LineStream|PointStream|TriangleStream)\\b"
		},
		{
			"name": "support.type.sampler.legacy.hlsl",
			"match": "\\b(sampler|sampler1D|sampler2D|sampler3D|samplerCUBE|sampler_state)\\b"
		},
		{
			"name": "support.type.sampler.hlsl",
			"match": "\\b(SamplerState|SamplerComparisonState)\\b"
		},
		{
			"name": "support.type.texture.legacy.hlsl",
			"match": "\\b(texture2D|textureCUBE)\\b"
		},
		{
			"name": "support.type.texture.hlsl",
			"match": "\\b(Texture1D|Texture1DArray|Texture2D|Texture2DArray|Texture2DMS|Texture2DMSArray|Texture3D|TextureCube|TextureCubeArray)\\b"
		},
		{
			"name": "storage.type.structured.hlsl",
			"match": "\\b(cbuffer|class|interface|namespace|struct|tbuffer)\\b"
		},
		{
			"name": "support.constant.property-value.fx.hlsl",
			"match": "\\b(FALSE|TRUE|NULL)\\b"
		},
		{
			"name": "support.type.fx.hlsl",
			"match": "\\b(BlendState|DepthStencilState|RasterizerState)\\b"
		},
		{
			"name": "storage.type.fx.technique.hlsl",
			"match": "\\b(technique|Technique|technique10|technique11|pass)\\b"
		},
		{
			"name": "meta.object-literal.key.fx.blendstate.hlsl",
			"match": "\\b(AlphaToCoverageEnable|BlendEnable|SrcBlend|DestBlend|BlendOp|SrcBlendAlpha|DestBlendAlpha|BlendOpAlpha|RenderTargetWriteMask)\\b"
		},
		{
			"name": "meta.object-literal.key.fx.depthstencilstate.hlsl",
			"match": "\\b(DepthEnable|DepthWriteMask|DepthFunc|StencilEnable|StencilReadMask|StencilWriteMask|FrontFaceStencilFail|FrontFaceStencilZFail|FrontFaceStencilPass|FrontFaceStencilFunc|BackFaceStencilFail|BackFaceStencilZFail|BackFaceStencilPass|BackFaceStencilFunc)\\b"
		},
		{
			"name": "meta.object-literal.key.fx.rasterizerstate.hlsl",
			"match": "\\b(FillMode|CullMode|FrontCounterClockwise|DepthBias|DepthBiasClamp|SlopeScaleDepthBias|ZClipEnable|ScissorEnable|MultiSampleEnable|AntiAliasedLineEnable)\\b"
		},
		{
			"name": "meta.object-literal.key.fx.samplerstate.hlsl",
			"match": "\\b(Filter|AddressU|AddressV|AddressW|MipLODBias|MaxAnisotropy|ComparisonFunc|BorderColor|MinLOD|MaxLOD)\\b"
		},
		{
			"name": "support.constant.property-value.fx.blend.hlsl",
			"match": "\\b(?i:ZERO|ONE|SRC_COLOR|INV_SRC_COLOR|SRC_ALPHA|INV_SRC_ALPHA|DEST_ALPHA|INV_DEST_ALPHA|DEST_COLOR|INV_DEST_COLOR|SRC_ALPHA_SAT|BLEND_FACTOR|INV_BLEND_FACTOR|SRC1_COLOR|INV_SRC1_COLOR|SRC1_ALPHA|INV_SRC1_ALPHA)\\b"
		},
		{
			"name": "support.constant.property-value.fx.blendop.hlsl",
			"match": "\\b(?i:ADD|SUBTRACT|REV_SUBTRACT|MIN|MAX)\\b"
		},
		{
			"name": "support.constant.property-value.fx.depthwritemask.hlsl",
			"match": "\\b(?i:ALL)\\b"
		},
		{
			"name": "support.constant.property-value.fx.comparisonfunc.hlsl",
			"match": "\\b(?i:NEVER|LESS|EQUAL|LESS_EQUAL|GREATER|NOT_EQUAL|GREATER_EQUAL|ALWAYS)\\b"
		},
		{
			"name": "support.constant.property-value.fx.stencilop.hlsl",
			"match": "\\b(?i:KEEP|REPLACE|INCR_SAT|DECR_SAT|INVERT|INCR|DECR)\\b"
		}